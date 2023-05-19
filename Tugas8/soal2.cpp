#include <iostream>
using namespace std;
void cetak (int array[], int n);
void swap (int &a, int &b);
void selectionSort (int array[], int n);
void bubbleSort (int array[], int n);

int main()
{
    int n;
    cout << "Masukkan panjang array : ";
    cin >> n;
    int array[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan nilai array index ke-" << i << " : ";
        cin >> array [i];
    }
    cout << endl;
    cout << "Array sebelum diurutkan : ";
    cetak (array, n);
    cout << endl;

    int pilih=0;
    cout << "==Pilih metode Sorting==" << endl;
    cout << "1. Selection Sort" << endl;
    cout << "2. Bubble Sort" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilih;
    cout << endl;
    if (pilih == 1){
        selectionSort (array,n);
    } else if (pilih == 2){
        bubbleSort (array, n);
    } else {
        cout << "Input salah" << endl;
    }
    return 0;
}

void cetak (int array[], int n)
{
    cout << "\n";
    for (int i=0; i<n; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void swap (int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selectionSort (int array[], int n)
{
    for (int i=0; i<n-1; i++){
        for (int j=i; j<n; j++){
            if (array[i]<array[j]){
                swap (array[i], array[j]);
            }
        }
    }
    cout << "Array setelah diurutkan menggunakan selection sort : ";
    cetak (array, n);
}

void bubbleSort (int array[], int n)
{
    for (int step=0; step<n; step++){
        int acak = 0;
        for (int i=0; i<n; i++){
            if (array[i]<array[i+1]){
                swap(array[i], array[i+1]);
                acak ++;
            }
        }
        if (acak == 0){
            break;
        }
    }
    cout << "Array setelah diurutkan menggunakan bubble sort : ";
    cetak (array, n);
}
