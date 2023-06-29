#include <iostream>
#include <iomanip>

/*
MAULIDYA AYU A. - A11.2022.14310
TUGAS 5 - STRUCT DAN POINTER
*/

using namespace std;

struct hitung {
    int p, l, r, t;
    float hsl;
};
struct hitung luas;
struct hitung luas_l;
struct hitung volume_k;
struct hitung volume_b;

struct sepeda {
    string merk;
    string type;
    int tahun_pembuatan;
    float harga;
};
struct sepeda sepeda_x;

int main(){

    cout << "LATIHAN 1" << endl;
    hitung *persegi = nullptr;
    persegi = &luas;

    luas.p = 20;
    luas.l =10;
    luas.hsl = luas.p * luas.l;
    cout << "Luas persegi panjang dengan panjang " << (*persegi).p <<"cm dan lebar " << (*persegi).l << "cm adalah " << (*persegi).hsl << "cm." << endl;

    cout << endl;

    hitung *lingkaran = nullptr;
    lingkaran = &luas_l;

    luas_l.r = 15;
    luas_l.hsl = (22 * luas_l.r * luas_l.r)/7;
    cout << "Luas lingkaran dengan jari jari " << (*lingkaran).r << "cm adalah " << (*lingkaran).hsl << "cm." << endl;

    cout << endl;

    hitung *kerucut = nullptr;
    kerucut = &volume_k;

    volume_k.r = 8;
    volume_k.t = 15;
    volume_k.hsl = (3.14 * volume_k.r * volume_k.r * volume_k.t)/3;
    cout << "Volume kerucut dengan jari jari " << (*kerucut).r << "cm dan tinggi " << (*kerucut).t << "cm adalah " << (*kerucut).hsl << "cm." << endl;

    cout << endl;

    hitung *bola = nullptr;
    bola = &volume_b;

    volume_b.r = 9;
    volume_b.hsl = (4 * 3.14 * volume_b.r * volume_b.r * volume_b.r)/3;
    cout << "Volume kerucut dengan jari jari " << (*bola).r << "cm adalah " << (*bola).hsl << "cm." << endl;

    cout << endl << endl;

    cout << "LATIHAN 2" << endl;
    sepeda *sepeda_ptr = nullptr;
    sepeda_ptr = &sepeda_x;

    (*sepeda_ptr).merk = "Polygon";
    (*sepeda_ptr).type = "Sepeda Gunung";
    (*sepeda_ptr).tahun_pembuatan = 2013;
    (*sepeda_ptr).harga = 2000000;

    cout << "Merk : " << (*sepeda_ptr).merk << endl;
    cout << "Type : " << (*sepeda_ptr).type << endl;
    cout << "Tahun : " << (*sepeda_ptr).tahun_pembuatan << endl;
    cout << fixed << setprecision(0) << "Harga : " << (*sepeda_ptr).harga << endl;

    return 0;
}
