#include <iostream>
/*
MAULIDYA AYU A. - A11.2022.14310
fungsi FIBONACCI - pertemuan 9
*/
using namespace std;

int fib(int n) {
    if (n<=1)
        return n;
    else
        return fib(n-2) + fib(n-1);
}

int main()
{
    int n;
    cout << "masukkan angka = ";
    cin >> n;
    int fibonacci = fib(n);
    cout << fibonacci;
    return 0;
}
