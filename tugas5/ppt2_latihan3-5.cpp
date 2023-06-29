#include <iostream>
#include <cstring>

using namespace std;

struct hitung {
    int p, l, r, t;
    float hsl;
};
typedef struct hitung operasi;
operasi luas;
operasi luas_l;
operasi volume_k;
operasi volume_b;

typedef struct pekerja{
	int id;
	char NIM[20], nama[20], jurusan[20], tlulus[20];
}emp;


int main()
{
     cout << "LATIHAN 3" << endl;
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

    emp data[2];
    strcpy(data[0].NIM, "A11.2020.01234");
    strcpy(data[0].nama, "Andi");
    strcpy(data[0].jurusan, "Broadcating");
    strcpy(data[0].tlulus, "2023");
    data[0].id = 0001;

    strcpy(data[1].NIM, "A11.2010.01234");
    strcpy(data[1].nama, "Budi");
    strcpy(data[1].jurusan, "Sistem Informasi");
    strcpy(data[1].tlulus, "2013");
    data[1].id = 0002;

    strcpy(data[2].NIM, "A11.2000.01234");
    strcpy(data[2].nama, "Ali");
    strcpy(data[2].jurusan, "DKV");
    strcpy(data[2].tlulus, "2003");
    data[2].id = 0002;

    strcpy(data[3].NIM, "A11.1990.01234");
    strcpy(data[3].nama, "Siti");
    strcpy(data[3].jurusan, "Kesehatan");
    strcpy(data[3].tlulus, "1993");
    data[3].id = 0003;

    int x;
    for (x = 0; x < 4; x++) {
        cout << " | " << data[x].NIM << " | " << data[x].nama << " | " << data[x].jurusan << " | " << data[x].tlulus << " | " << endl;
    }


    return 0;
}
