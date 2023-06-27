#include <iostream>
using namespace std;

struct sepeda {
    string Merk;
    string Type;
    int Tahun;
    string Harga;
}; struct sepeda spd;

int main() {
    spd.Merk = "Polygon";
    spd.Type = "Sepeda Gunung";
    spd.Tahun = 2013;
    spd.Harga = "2.000.000";

    cout << "Merk   : " << spd.Merk << endl;
    cout << "Type   : " << spd.Type << endl;
    cout << "Tahun  : " << spd.Tahun << endl;
    cout << "Harga  : " << spd.Harga << endl;

    return 0;
}

