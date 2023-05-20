#include <iostream>

using namespace std;
void cb() {
    int cb = 0;
    cb++;
    cout << "output cb: " << cb << endl;
}

void cb2() {
    static int cb2 = 0;
    cb2++;
    cout << "output cb2: " << cb2 << endl;
}

void cb3() {
    int cb3;
    cb3++;
    cout << "output cb3: " << cb3 << endl;
}

int main()
{
    cb();
    cb();
    cb();
    cout << endl;
    cb2();
    cb2();
    cb2();
    cout << endl;
    cb3();
    cb3();
    cb3();
    cout << endl;
}
