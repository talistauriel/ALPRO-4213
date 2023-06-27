#include <iostream>
#include <iomanip>
using namespace std;

typedef struct mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahun;
}; typedef struct mahasiswa;

int main(){
    int n;
    cout << "Masukkan panjang data : ";
    cin >> n;

    mahasiswa* data = new mahasiswa[n];

    for (int i=0; i<n; i++){
        cout << "Data Mahasiswa " << i+1 << endl;
        cout << "NIM : ";
        cin >> data[i].nim ;
        cout << "Nama : ";
        cin.ignore();
        getline(cin, data[i].nama);
        cout << "Jurusan : ";
        getline(cin, data[i].jurusan);
        cout << "Tahun Lulus : ";
        cin >> data[i].tahun;
        cout << endl;
    }

    cout << "---------------------------DATA  MAHASISWA---------------------------" << endl;
    cout << "=====================================================================\n";
    cout << "|     NIM       |     Nama     |     Jurusan      |   Tahun Lulus  |\n";
    cout << "=====================================================================\n";
    for (int i=0; i<n; i++){
        cout << "|" << setiosflags(ios::left) << setw(15) << data[i].nim << "|";
        cout << setiosflags(ios::left) << setw(14) << data[i].nama << "|";
        cout << setiosflags(ios::left) << setw(18) << data[i].jurusan << "|";
        cout << setiosflags(ios::left) << setw(16) << data[i].tahun << "|\n";
        cout << "---------------------------------------------------------------------";
        cout << endl;
    }

    delete[] data;
    return 0;
}

