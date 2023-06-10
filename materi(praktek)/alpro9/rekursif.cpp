#include <iostream>
/*
MAULIDYA AYU A. - pertemuan 9
JUDUL : fungsi rekursif
*/
using namespace std;

int add (int a, int b);
int faktorial(int n);
int faktRekursif(int n);

int main()
{
    cout << faktorial(5) << endl;
    cout << faktRekursif(4) << endl;
    cout << add(5, 6) << endl;

    return 0;
}

int add (int a, int b) {
    if (b==0)
        return 0;
    else
        return 1 + add(a, b-1);
}

int faktorial (int n) { //implementasi / definisi
    int result = 1;
    for (int i=n; i>=1; i--) {
        result *= i;
    }
    return result;
}

int faktRekursif (int n) {
    if (n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return n * faktRekursif(n-1); //rekursi
}
