#include <iostream>
/*
pertemuan 8 materi
FUNGSI REKURSIF - faktorial
*/
using namespace std;
//contoh fungsi iterasi
int faktorial_i (int n) {
    int hasil = 1;
    if (n>=1){
        for (int i=1; i<=n; i++) {
            hasil *= i;
        }
    }
    return hasil;
}

//contoh fungsi rekursif
int faktorial_r (int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n*faktorial_r(n-1);
    }
}

int main()
{
    //output fungsi iterasi
    int hasil;
    hasil = faktorial_i(5);
    cout << "faktorial dari 5! adalah " << hasil << endl;

    //output fungsi rekursif
    int total;
    total = faktorial_r(4);
    cout << "faktorial dari 4! adalah " << total << endl;

    return 0;
}
