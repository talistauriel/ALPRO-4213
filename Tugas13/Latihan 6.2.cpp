#include <iostream>
using namespace std;

enum nama_hari {Minggu = 0, Senin = 1, Selasa = 2, Rabu = 3, Kamis = 4, Jumat = 5, Sabtu = 6};

int main(){
    nama_hari var1;

    var1 = Senin;
    cout << "nama_hari" << var1 << endl;

    var1 = Rabu;
    cout << var1 << endl;

    cout << endl;
    return 0;
}
