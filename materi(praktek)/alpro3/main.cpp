#include <iostream>
/*
Selasa, 21 Maret 2023
minggu 3 - fungsi 1
*/
using namespace std;

int maxN (int a, int b); //deklarasi fungsi

int maxArray (int A[], int n);

int main()
{
    cout << "Output untuk MaxN : " << endl;
    cout << maxN(4,5) << endl;

    int A[] = {1, 6, 7, 9, 2};
    int n = sizeof(A)/sizeof(int);
    //sizeof jgn masuk ke fungsi, masuknya harus di int main()

    //sizeof(A), utk jmlh byte element. ukurannya biasanya 4byte per element, nnti dikali sm banyaknya element

    /*sizeof(A[0]), utk byte satu element. karena tiap element pasti nilai bytenya sama, jd biasanya pake element ke 0 (A[0])
    tp mau gs 0 jg gapapa, bs pake element ke brp aja*/
    cout << "Output untuk maxArray : \n" << maxArray(A, n);


    return 0;
}

//definisi fungsi
int maxN (int a, int b) {
    int temp;
    if (a>b) {
        temp=a;
    }
    else {
        temp=b;
    }
    return temp;
}

int maxArray (int A[], int n) {
    int temp = 0;

    for (int i=0; i<n; i++) {
        if (A[i] > temp) temp = A[i];
    }
    return temp;
}


/*
judul fungsi : maxArray (A[]: integer) -> integer
<fungsi untuk mencari nilai maks pada deret>

kamus:
    A[]: integer //deret bil. yg dicari
    temp: integer //nilai max sementara
    maxN (a, b : integer) -> integer
        //fungsi yg kita butuhkan
        //mengembalikan nilai max dr 2 bil.


notasi algoritma
    temp <- 0
    i traversal [0...n] //asumsi A[4]=[1, 3, 4, 3]
        temp <- di sini gunakan fungsi maxN untuk membandingkan temp lama dgn A[i]
    end traversal

    return <nilai apa yang direturn>

    note : implementasikan pemanggilan di int main(), termasuk deklarasi array yg akan diuji

*/
