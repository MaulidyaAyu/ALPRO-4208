#include <iostream>

using namespace std;

int PassByValue (int n) {
    return n  * 10;
}

void PassByReference (int &n) {
    n = n / 2;
}

int main()
{
    int *iPtr;
    char *cPtr;
    float *fPtr;

    int iNumber = 4;
    float fNumber = 7.58;
    char cChar = 'y';

    iPtr = &iNumber;
    cPtr = &cChar;
    fPtr = &fNumber;

    cout << "Nilai dari variabel pointer: " << endl;
    cout << "iPtr = " << *iPtr << endl;
    cout << "cPtr = " << *cPtr << endl;
    cout << "fPtr = " << *fPtr << endl;

    cout << endl;

    cout << "Nilai dari variable non-pointer: " << endl;
    cout << "iNumber = " << iNumber << endl;
    cout << "fNumber = " << fNumber << endl;
    cout << "cChar = " << cChar << endl;

    cout << endl;

    cout << "Alamat dari variabel pointer: " << endl;
    cout << "iPtr = " << &iPtr << endl;
    cout << "cPtr = " << &cPtr << endl;
    cout << "fPtr = " << &fPtr << endl;

    cout << endl;

    cout << "Alamat dari variable non-pointer: " << endl;
    cout << "iNumber = " << &iNumber << endl;
    cout << "fNumber = " << &fNumber << endl;
    cout << "cChar = " << &cChar << endl;

    cout << endl;

    cout << "Pass by Value:" << endl;
    cout << "Nilai iNumber sebelum = " << iNumber << endl;
    PassByValue(iNumber);
    cout << "Nilai iNumber sesudah = " << iNumber << endl;

    cout << endl;

    cout << "Pass by Reference:" << endl;
    cout << "Nilai iPtr sebelum = " << *iPtr << endl;
    PassByReference(*iPtr);
    cout << "Nilai iPtr sesudah = " << *iPtr << endl;

    return 0;
}
