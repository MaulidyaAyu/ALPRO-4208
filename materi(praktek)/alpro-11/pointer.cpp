#include <iostream>
/*
MAULIDYA AYU A - A11.2022.14310
minggu 1 - POINTER
*/
using namespace std;

int main()
{
    /*
    int x = 8;

    int *p = &x;

    - * adalah pointer, penunjuk alamat memory
    */

    char c = 0;
    char *p = &c;
    cout << "size = " << sizeof(p) << endl; //size pointer
    cout << endl;

    int var1 = 3;
    int var2 = 24;
    int *p1 = &var1;
    int *p2 = &var2;

    cout << "Addres of var1 = " << &var1 << endl;
    cout << "Addres saved on p1 = " << p1 << endl;
    cout << "Alamat p1 = " << &p1 << endl;
    cout << "nilai yang disimpan p1 = " << *p1 << endl;
    cout << endl;
    *p1 = 5;
    cout << "Value of var1 = " << var1 << endl;
    *p2 = *p1;
    cout << "Value of var2 = " << var2 << endl;

    cout << endl;
    cout << "Addres of var2 = " << &var2 << endl;
    cout << "Addres saved on p2 = " << p2 << endl;
    cout << "Alamat p2 = " << &p2 << endl;
    cout << "nilai yang disimpan p2 = " << *p2 << endl;
    cout << endl;

    return 0;
}
