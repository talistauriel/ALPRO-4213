#include <iostream>
#include <iomanip>
using namespace std;

typedef struct mahasiswa{
    string nim;
    string nama;
    string jurusan;
    int tahun;
}; typedef struct mahasiswa;

int main(){
    int n = 4;
    mahasiswa* data = new mahasiswa[n];

    data[0].nim = "A11.2020.01234";
    data[0].nama = "Andi";
    data[0].jurusan = "Broadcasting";
    data[0].tahun = 2023;

    data[1].nim = "A11.2010.01234";
    data[1].nama = "Budi";
    data[1].jurusan = "Sistem Informasi";
    data[1].tahun = 2013;

    data[2].nim = "A11.2000.01234";
    data[2].nama = "Ali";
    data[2].jurusan = "DKV";
    data[2].tahun = 2003;

    data[3].nim = "A11.1990.01234";
    data[3].nama = "Siti";
    data[3].jurusan = "Kesehatan";
    data[3].tahun = 1993;

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


// ==Analisis jawaban antara input array of structure statis dan dinamis==
// Array statis mempunyai ukuran tetap dan dideklarasikan dengan menyebut ukurannya
// Sehingga array of structure statis mungkin lebih efisien karena ukuran array tetap dan tidak perlu diubah
// Namun untuk array statis data yang dimasukkan tidak flexibel
// Untuk array statis execution time lebih cepat karena data sudah diinputkan langsung dari awal di codingan
// Sedangkan untuk Array dinamis dapat berubah ukurannya dan dideklarasikan tanpa menyebut ukurannya
// Sehingga array of structure dinamis dapat lebih fleksibel dripada statis





