#include <iostream>
using namespace std;

struct persegiPj{
    int p,l;
    int Luas(){
        return p*l;
    }
}; struct persegiPj lpj;

struct lingkaran{
    int r;
    float phi;
    float Luas(){
        return phi*r*r;
    }
}; struct lingkaran ll;

struct kerucut{
    int r,t;
    float phi;
    float Volume(){
        return 0.3*phi*r*r*t;
    }
}; struct kerucut vk;

struct bola{
    int r;
    float phi;
    float Volume(){
        return 1.3*phi*r*r;
    }
}; struct bola vb;

int main(){
    lpj.p = 12;
    lpj.l = 10;
    cout << "Luas Persegi Panjang   : "<< lpj.Luas() << endl;

    ll.r = 7;
    ll.phi = 3.14;
    cout << "Luas Lingkaran         : "<< ll.Luas() << endl;

    vk.r = 10;
    vk.t = 10;
    vk.phi = 3.14;
    cout << "Volume Kerucut         : "<< vk.Volume() << endl;

    vb.r = 10;
    vb.phi = 3.14;
    cout << "Volume Bola            : "<< vb.Volume() << endl;

    return 0;
}
