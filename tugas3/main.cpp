#include <iostream>
/*
MAULIDYA AYU A. - A11.2022.14310
HOMEWORK ALPRO TEORI
buatlah fungsi rekursif :
1. penjumlahan
2. pengurangan
3. perkalian
4. pembagian
5. pangkat
*/
using namespace std;

//penjumlahan
int jumlah (int a, int b) {
    if (b<0) {
        return 0;
    }
    else {
        return a + jumlah(1, b-1);
    }
}

//pengurangan
int kurang (int m, int n) {
    if (n==0) {
        return m;
    }
    else {
        return kurang(m-1, n-1);
    }
}

//perkalian
int kali (int x, int y) {
    if (y == 0) {
        return 0;
    }
    else {
        return x + kali(x, y-1);
    }
}

//pembagian
int bagi(int p, int l) {
    if (p<l)
        return 0;
    else
        return 1 + bagi(p-l, l);
}

//pangkat
int pangkat(int i, int j) {
    if (j == 0) {
        return 1;
    }
    else {
        return i * pangkat(i, j-1);
    }
}

int main()
{
    //output penjumlahan
    cout << "1. fungsi rekursif penjumlahan" << endl;
    int jml;
    jml = jumlah(2, 4);
    cout << "hasil dari penjumlahan 2 dan 4 adalah " << jml << endl << endl;

    //output pengurangan
    cout << "2. fungsi rekursif pengurangan" << endl;
    int krg;
    krg = kurang(5, 2);
    cout << "hasil pengurangan dari 5 dan 2 adalah " << krg << endl << endl;

    //output perkalian
    cout << "3. fungsi rekursif perkalian" << endl;
    int x;
    x = kali(5, 4);
    cout << "hasil perkalian antara 5 dan 4 adalah " << x << endl << endl;

    //output pembagian
    cout << "4. fungsi rekursif pembagian" << endl;
    int b;
    b = bagi(5, 2);
    cout << "hasil pembagian bulat dari 5 dibagi 2 adalah " << b << endl << endl;

    //output pangkat
    cout << "5. fungsi rekursif pangkat" << endl;
    int pgkt;
    pgkt = pangkat(3, 4);
    cout << "hasil dari 3 pangkat 4 adalah " << pgkt << endl << endl;

    return 0;
}
