#include <iostream>
using namespace std;

bool isEven (int x);
bool isOdd (int x);
bool isFactor (int x, int F);
int Max (int a, int b);
int Min (int a, int b);
int maxArray (int A[], int b);
int minArray (int A[], int b);
int SumEven (int A[], int b);
int SumOdd (int A[], int b);
bool isFound (int A[], int n, int x);
void Swap (int a, int b);

int main(){
    int a;
    cout << "//Fungsi isEven//" << endl;
    cout << "Masukkan bilangan : " ;
    cin >> a;
    string Even = (isEven(a)==1)? " adalah bilangan genap " : " bukan bilangan genap (ganjil)";
    cout << a << Even << endl;
    cout << " " << endl;

    cout << "//Fungsi isOdd//" << endl ;
    cout << "Masukkan bilangan : " ;
    cin >> a;
    string Odd = (isOdd(a)==1)? " adalah bilangan ganjil " : " bukan bilangan ganjil (genap)";
    cout << a << Odd << endl;
    cout << " " << endl;

    int o,F;
    cout << "//Fungsi isFactor//" << endl;
    cout << "Masukkan bilangan : ";
    cin >> o;
    cout << "Masukkan Faktor : ";
    cin >> F;
    string Factor = (isFactor(o,F)==1)? " merupakan faktor dari bilangan " : " bukan faktor dari bilangan ";
    cout << F << Factor << o << endl;
    cout << " " << endl;

    int p,q;
    cout << "//Fungsi Max Min//" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> p;
    cout << "Masukkan bilangan kedua : ";
    cin >> q;
    cout << "Nilai maksimum diantara dua bilangan tersebut adalah : " << Max (p,q) << endl;
    cout << "Nilai minimum diantara dua bilangan tersebut adalah : " << Min (p,q) << endl;
    cout << " " << endl;

    int n;
    cout << "//Fungsi Array (Max, Min, SumEven, SumOdd)//" << endl;
    cout << "Masukkan panjang array : ";
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan nilai array ke-" << i << " : ";
        cin >> A[i];
    }
    int max_Arr = maxArray (A, n);
    cout << "Nilai maksimum dari array adalah : " << max_Arr << endl;
    int min_Arr = minArray (A, n);
    cout << "Nilai minimum dari array adalah : " << min_Arr << endl;
    int sum_Even = SumEven(A, n);
    cout << "Jumlah bilangan genap dari array adalah : " << sum_Even << endl;
    int sum_Odd = SumOdd (A, n);
    cout << "Jumlah bilangan ganjil dari array adalah : " << sum_Odd << endl;
    cout << " " << endl;

    cout << "//isFound//" << endl;
    cout << "Masukkan panjang array : ";
    cin >> n;
    int x;
    for (int i=0; i<n; i++){
        cout << "Masukkan nilai array ke-" << i << " : ";
        cin >> A[i];
    }
    cout << "Masukkan nilai yang dicari : " ;
    cin >> x;
    string Cari = (isFound(A,n,x)==1)? "Nilai ditemukan" : "Nilai tidak ditemukan";
    cout << Cari << endl;
    cout << " " << endl;

    int b;
    cout << "//Prosedur Swap//" << endl;
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    Swap(a, b);

    return 0;
}

bool isEven (int x){
    if (x%2 == 0){
        return true;
    } else {
        return false;
    }
}

bool isOdd (int x){
    if (x%2 == 1){
        return true;
    } else {
        return false;
    }
}

bool isFactor (int x, int F){
    return x % F == 0;
}

int Max (int a, int b){
    return max(a,b);
}

int Min (int a, int b){
    return min(a,b);
}

int maxArray (int A[], int n){
    int max_Arr;
    for(int i = 0; i < n; i++){
        if(A[i] > max_Arr){
            max_Arr = A[i];
        }
    }
    return max_Arr;
}

int minArray (int A[], int n){
    int min_Arr = A[0];
    for(int i = 1; i < n; i++){
        if(A[i] < min_Arr){
            min_Arr = A[i];
        }
    }
    return min_Arr;
}

int SumEven (int A[], int n){
    int sum_Even = 0;
    for(int i = 0; i<n; i++){
        if(A[i]%2 == 0){
            sum_Even += A[i];
        }
    }
    return sum_Even;
}

int SumOdd (int A[], int n){
    int sum_Odd = 0;
    for(int i = 0; i<n; i++){
        if(A[i]%2 == 1){
            sum_Odd += A[i];
        }
    }
    return sum_Odd;
}

bool isFound (int A[], int n, int x){
    for (int i=0; i<n; i++){
        if(A[i] == x){
            return true;
        }
    }
    return false;
}

void Swap(int a, int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout << "Nilai a : " << a << endl << "Nilai b : " << b;
}
