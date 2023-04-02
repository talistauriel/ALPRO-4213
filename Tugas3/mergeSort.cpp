#include <iostream>
using namespace std;

void cetak(int A[], int  size);
void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int l, int r);

int main()
{
    int n;
    cout << "\nMasukan panjang array -> "; cin >> n;
    int arr[n] ;
    for(int i = 0; i < n; i++)
    {
        cout << "Masukan nilai dari array indeks ke " << i << " -> "; cin >> arr[i];
    }
    cout << "\nArray sebelum di urutkan -> \n";
    cetak(arr, n);

    mergeSort(arr, 0, n-1);
    cout << "\nArray setelah di urutkan -> \n";
    cetak(arr, n);
    return 0;
}

void cetak(int A[], int  size)
{
    int i;
    cout << "\n";
    for (i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n" ;
}

void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (j = 0 ; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
