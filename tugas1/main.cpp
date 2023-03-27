#include <iostream>
/*
MULIDYA AYU ARDIENA
A11.2022.14310
KELOMPOK 4208
TUGAS 1
1. Penjumlahan 2 bilangan
2. Pengurangan 2 bilangan
3. Jumlah total element dalam array
4. Nilai rata-rata element dalam array
*/
using namespace std;

int jml (int a, int b) {
    int x;
    x = a + b;
    return x;
}

void krg (int x, int y) {
    cout << "Hasil pengurangan dari " << x << " dan " << y << " adalah " << x - y << endl;
}

void jmlArray() {
    int a[5], x;
    cout << "Masukkan 5 angka:" << endl;
    for (int i=0; i<5; i++) {
        cout << "Angka ke-" << i+1 << " = ";
        cin >> a[i];
        x+=a[i];
    }
    for (int i=0; i<1; i++) {
        cout << "Jumlah nilai total dari array [" << a[0] << ", " << a[1] << ", " << a[2] << ", " << a[3] << ", " << a[4] << "] adalah " << x << endl;
    }
}

void rataArray() {
    int a[5], x, rata2;
    cout << "Masukkan 5 angka:" << endl;
    for (int i=0; i<5; i++) {
        cout << "Angka ke-" << i+1 << " = ";
        cin >> a[i];
        x+=a[i];
    }
    rata2 = x/5;
    for (int i=0; i<1; i++) {
        cout << "Jumlah nilai rata-rata dari array [" << a[0] << ", " << a[1] << ", " << a[2] << ", " << a[3] << ", " << a[4] << "] adalah " << rata2 << endl;
    }
}

int main()
{
    int a, b;
    cout << "1. Penjumlahan 2 bilangan" << endl;
    cout << "Masukkan angka pertama = ";
    cin >> a;
    cout << "Masukkan angka kedua = ";
    cin >> b;
    cout << "Hasil penjumlahan dari " << a << " dan " << b << " adalah " << jml(a, b) << endl;
    cout << endl;

    int x, y;
    cout << "2. Pengurangan 2 bilangan" << endl;
     cout << "Masukkan angka pertama = ";
    cin >> x;
    cout << "Masukkan angka kedua = ";
    cin >> y;
    krg(x, y);
    cout << endl << endl;

    cout << "3. Jumlah total element dalam array" << endl;
    jmlArray();
    cout << endl;

    cout << "4. Nilai rata-rata element dalam array" << endl;
    rataArray();
    return 0;
}
