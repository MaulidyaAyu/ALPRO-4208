#include <iostream>
/*
MAULIDYA AYU ARDIENA - A11.2022.14310
MINGGU 5
*/
using namespace std;

void swapn (int &a, int &b){ //pake & karena mau dimodif gt (diswap contohnya)
    int temp = a;
    a = b;
    b = temp;
}

int* sortA (int A[], int n){
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (A[i] > A[j])swapn(A[i], A[j]);
        }
    }
    return A;
}

int main()
{
    /*int a=9, b=7;
    cout << "sebelum swap" << endl;
    cout << a << endl;
    cout << b << endl;

    swapn(a,b);
    cout << "sesudah swap" << endl;
    cout << a << endl;
    cout << b << endl;
    */


    /*
    fungsi: sortA(A[]: integer) -> integer[]
    kamus :
        A[]: integer //array yang akan disortir
        n  : integer //asumsi sbg jmlh array

    Algoritma :
        i interval[0...n-1]
            j interval[i...n-1]
                if (A[i] > A[j]) then
                    swapn(A[i], A[j])
                endif
            end
        end
        return A;

    */
    cout << "sebelum swap:\n4, 7, 9, 2" << endl;
    int A[] = {4, 7, 9, 2};
    int n = sizeof(A)/sizeof(int);
    cout << "sesudah swap:" << endl;
    int* b = sortA(A, n);
    for (int i=0; i<n; i++)
    cout << b[i] << " ";
    return 0;
}
