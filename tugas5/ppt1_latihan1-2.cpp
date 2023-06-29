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
    string merk, type;
    int tahun_pembuatan;
    float harga;
};
struct sepeda sepeda_x;

int main(){

    cout << "LATIHAN 1" << endl;

    luas.p = 20;
    luas.l =10;
    luas.hsl = luas.p * luas.l;
    cout << "Luas persegi panjang dengan panjang " << luas.p <<"cm dan lebar " << luas.l << "cm adalah " << luas.hsl << "cm." << endl;

    cout << endl;

    luas_l.r = 15;
    luas_l.hsl = (22 * luas_l.r * luas_l.r)/7;
    cout << "Luas lingkaran dengan jari jari " << luas_l.r << "cm adalah " << luas_l.hsl << "cm." << endl;

    cout << endl;

    volume_k.r = 8;
    volume_k.t = 15;
    volume_k.hsl = (3.14 * volume_k.r * volume_k.r * volume_k.t)/3;
    cout << "Volume kerucut dengan jari jari " << volume_k.r << "cm dan tinggi " << volume_k.t << "cm adalah " << volume_k.hsl << "cm." << endl;

    cout << endl;

    volume_b.r = 9;
    volume_b.hsl = (4 * 3.14 * volume_b.r * volume_b.r * volume_b.r)/3;
    cout << "Volume kerucut dengan jari jari " << volume_b.r << "cm adalah " << volume_b.hsl << "cm." << endl;

    cout << endl << endl;

    cout << "LATIHAN 2" << endl;

    sepeda_x.merk = "Polygon";
    sepeda_x.type = "Sepeda Gunung";
    sepeda_x.tahun_pembuatan = 2013;
    sepeda_x.harga = 2000000;

    cout << "Merk : " << sepeda_x.merk << endl;
    cout << "Type : " << sepeda_x.type << endl;
    cout << "Tahun : " << sepeda_x.tahun_pembuatan << endl;
    cout << fixed << setprecision(0) << "Harga : " << sepeda_x.harga << endl;

    return 0;
}
