#include <iostream>
using namespace std;
int penjumlahan (int a, int b);
int pengurangan (int a, int b);
int perkalian (int a, int b);
int pembagian (int a, int b);
int pangkat(int x, int n);

int main()
{
    int a=4;
    int b=2;
    cout << "Nilai a:" << a << endl;
    cout << "Nilai b:" << b << endl;
    cout << "Hasil Penjumlahan : " << penjumlahan (a, b) << endl;
    cout << "Hasil Pengurangan : " << pengurangan (a, b) << endl;
    cout << "Hasil Perkalian : " << perkalian (a, b) << endl;
    cout << "Hasil Pembagian : " << pembagian (a, b) << endl;
    cout << "Hasil Pangkat : " << pangkat (a, b) << endl;

    return 0;
}

int penjumlahan (int a, int b)
{
    if (a<=0 && b<=0)
        return 0;
    else if (a>0)
        return 1+penjumlahan (a-1,b);
    else if (b>0)
        return 1+penjumlahan (a, b-1);
}

int pengurangan (int a, int b)
{
    if (b==0)
        return a;
    else
        return pengurangan(a-1, b-1);
}

int perkalian (int a, int b)
{
    if (a==0 || b==0)
        return 0;
    else return a+perkalian(a, b-1);
}

int pembagian (int a, int b)
{
    if (a<b)
        return 0;
    else
        return 1+pembagian(a-b, b);
}

int pangkat (int a, int n)
{
    if (n==0)
        return 1;
    else
        return a*pangkat (a, n-1);
}
