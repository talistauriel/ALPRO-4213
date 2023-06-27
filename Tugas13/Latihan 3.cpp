#include <iostream>
using namespace std;

typedef struct persegiPj {
    int p, l;
    int Luas() {
        return p * l;
    }
} lpj;

typedef struct lingkaran {
    int r;
    float phi;
    float Luas() {
        return phi * r * r;
    }
} ll;

typedef struct kerucut {
    int r, t;
    float phi;
    float Volume() {
        return 0.3 * phi * r * r * t;
    }
} vk;

typedef struct bola{
    int r;
    float phi;
    float Volume() {
        return 1.3 * phi * r * r * r;
    }
} vb;

int main() {
    lpj myPersegi;
    myPersegi.p = 12;
    myPersegi.l = 10;
    cout << "Luas Persegi Panjang   = " << myPersegi.Luas() << endl;

    ll myLingkaran;
    myLingkaran.r = 7;
    myLingkaran.phi = 3.14;
    cout << "Luas Lingkaran         = " << myLingkaran.Luas() << endl;

    vk myKerucut;
    myKerucut.r = 10;
    myKerucut.t = 10;
    myKerucut.phi = 3.14;
    cout << "Volume Kerucut         = " << myKerucut.Volume() << endl;

    vb myBola;
    myBola.r = 10;
    myBola.phi = 3.14;
    cout << "Volume Bola            = " << myBola.Volume() << endl;

    return 0;
}
