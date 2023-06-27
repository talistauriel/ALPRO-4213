#include <iostream>
using namespace std;

enum hari {Minggu = 0, Senin = 1, Selasa = 2, Rabu = 3, Kamis = 4, Jumat = 5, Sabtu = 6};

int main(){
    int hari;
    cout << "Input (0-6): ";
    cin >> hari ;
    cout << "Hari ini adalah hari : ";
    switch (hari) {
        case 0:
            cout << "Minggu";
            break;
        case 1:
            cout << "Senin";
            break;
        case 2:
            cout << "Selasa";
            break;
        case 3:
            cout << "Rabu";
            break;
        case 4:
            cout << "Kamis";
            break;
        case 5:
            cout << "Jumat";
            break;
        case 6:
            cout << "Sabtu";
            break;

    }
    cout << endl;
    return 0;
}
