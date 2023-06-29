#include <iostream>
#include <iomanip>

/*
MAULIDYA AYU A. - A11.2022.14310
TUGAS 5 - STRUCT DAN POINTER
*/

using namespace std;

struct sepeda {
    string merk;
    string type;
    int tahun_pembuatan;
    float harga;
};

int main(){

    sepeda *sepeda_ptr = nullptr;
    sepeda sepeda_x;
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
