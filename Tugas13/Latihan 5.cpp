#include <iostream>
using namespace std;

typedef struct sepeda {
    string Merk;
    string Type;
    int Tahun;
    string Harga;
} sepeda;

int main() {
    sepeda spd;
    sepeda* ptrSpd = &spd;

    ptrSpd->Merk = "Polygon";
    ptrSpd->Type = "Sepeda Gunung";
    ptrSpd->Tahun = 2013;
    ptrSpd->Harga = "2.000.000";

    cout << "Merk : " << ptrSpd->Merk << endl;
    cout << "Type : " << ptrSpd->Type << endl;
    cout << "Tahun : " << ptrSpd->Tahun << endl;
    cout << "Harga : " << ptrSpd->Harga << endl;

    return 0;
}

