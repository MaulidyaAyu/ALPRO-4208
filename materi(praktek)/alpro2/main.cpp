#include <iostream>
/*
selasa, 14 maret 2023
minggu 2 - ALPRO
*/
using namespace std;

void cb() {
    int cb = 0;
    cb++;
    cout << cb << endl;
}

void cb2() {
    static int cb2 = 0;
    cb2++;
    cout << cb2 << endl;
}

void cb3() {
    int cb3;
    cb3++;
    cout << cb3 << endl;
}

int jml (int a, int b) { //fungsi
    int x;
    x = a + b;
    return x;
}

void prosJml (int a, int b) { //prosedur
    cout << a + b << endl;
}

void ganjil (int x);

bool genap (int x);

int main()
{
    cout << "coba :" << endl;
    cb();
    cb();
    cb();

    cout << "coba 2 :" << endl;
    cb2();
    cb2();
    cb2();

    cout << "coba 3:" << endl;
    cb3();
    cb3();
    cb3();

    cout << endl;
    cout << "fungsi jumlah:" << endl;
    int bil1 = 5;
    int bil2 = 7;
    cout << jml(bil1, bil2) << endl;

    cout << endl;
    cout << "prosedur jumlah:" << endl;
    prosJml (10,7);

    cout << endl;
    cout << "utk angka ganjil:" << endl;
    ganjil(8); //ini manggil fungsinya harus ada di int main() even fungsinya ada di luar  int main

    cout << endl;
    cout << "angka genap tp harusnya yg keluar true(1)/false(0)" << endl;
    bool y = genap(3);
    bool z = genap (6);
    cout << "apakah 3 adalah angka genap? (true(1)/false(0)) = " << y << endl;
    cout << "apakah 6 adalah angka genap? (true(1)/false(0)) = " << z << endl;

    return 0;
}

void ganjil (int x) {
    if (x%2==1) {
        cout << "ganjil" << endl;
    }
    else {
        cout << "tidak ganjil" << endl;
    }
}

bool genap (int x){
    return x % 2 == 0;
}

