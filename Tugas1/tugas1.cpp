#include <iostream>
using namespace std;

int Penjumlahan(int a, int b){
    return a+b;
}

int Pengurangan(int a, int b){
    return a-b;
}

int TotalNilaiArr(int arr[], int n){
    int total = 0;
    for (int i=0; i<n; i++){
        total += arr[i];
    }
    return total;
}

int RataNilaiArr(int arr[], int n){
    int total = TotalNilaiArr(arr,n);
    float rata = (float)total / n;
    return rata;
}

int main(){
    int bilangan1, bilangan2;
    cout << "//Fungsi Penjumlahan Pengurangan//" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua : ";
    cin >> bilangan2;

    int hasilPenjumlahan = Penjumlahan(bilangan1, bilangan2);
    int hasilPengurangan = Pengurangan(bilangan1, bilangan2);

    cout << "Hasil penjumlahan : " << hasilPenjumlahan << endl;
    cout << "Hasil pengurangan : " << hasilPengurangan << endl;

    int n;
    cout << "//Fungsi Array//" << endl;
    cout << "Masukkan panjang array : ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan nilai array ke-" << i << " : ";
        cin >> arr[i];
    }
    int total = TotalNilaiArr(arr, n);
    cout << "Jumlah nilai total dari array : " << total << endl;

    float rata = RataNilaiArr(arr, n);
    cout << "Rata-rata nilai total dari array : " << rata << endl;


    return 0;
}
