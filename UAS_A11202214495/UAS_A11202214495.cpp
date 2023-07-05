/*
Nama    : Talista Auriella Haliana
Nim     : A11.2022.14495
Kelas   : A11.4213
*/

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    string nim;
    double score[5];

    void printData()
    {
        cout << "\nNama : " << nama << "\n";
        cout << "Nim : " << nim << "\n";
        for (int i = 0; i<5; i++){
            cout << "nilai " << i+1 << ":" << score[i] << "\n";
        }
    }

    void swapScore(double *a, double *b)
    {
        double temp = *a;
        *a = *b;
        *b = temp;
    }

    double sumScore(double arr[], long long n)
    {
        if(n==0){
            return 0;
        } else {
            return arr[n-1] + sumScore (arr, n-1);
        }
    }

    void bubbleSort (double arr[], long long n)
    {
        if (n <= 1){
            return ;
        } else {
        for (int i = 0; i<n-1; i++){
            if(arr[i] > arr [i+1])
                swapScore(&arr[i], &arr[i+1]);
        }
        bubbleSort(arr, n-1);
        }
    }
};

int main(){

    cout << "Program Data Mahasiswa" << endl;
    //Declare m1
    mahasiswa m1 = {"Talista Auriella", "A11.2022.14495", {90,91,90,70,80}};
    cout << "\nBefore swap" << endl;
    m1.printData();


    //After swap first and last element
    cout << "\nAfter swap" << endl;
    m1.swapScore(&m1.score[0], &m1.score[4]);
    m1.printData();

    //Average
    long long n = sizeof(m1.score) / sizeof(m1.score[0]);
    cout << "\nNilai rata-rataa: " << m1.sumScore(m1.score, n) / n << endl;

    //Sorting
    cout << "\nData sebelum di sorting" << endl;
    m1.printData();
    m1.bubbleSort(m1.score, n);
    cout << "\nData setelah di sorting" << endl;
    m1.printData();

    return 0;
}
