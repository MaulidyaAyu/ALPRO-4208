#include <iostream>
/*
fungsi
minggu2, Selasa 7 Maret 2023
*/
using namespace std;

// void prosedur. gaada returnnya
void fungsi(){
    cout << "Maulidya Ayu";
    cout << "\nA11.2022.14310";
    cout << "\nTeknik Informatika" << endl;
}

void hitung (int x, int y) {
    cout << x*y << endl;
    cout << x + y << endl;
}

void kubus (float p, float l) {
    cout << 6*p*l << endl;
}

//void fungsi (ga harus float. bisa int, array). ada returnnya
float balok (float p, float l) {
    return 6*p*l;
}

int segitiga (int a, int t) {
    return 0.5 * a * t;
}

int jml (int a, int b) {
    int x;
    x = a + b;
    return x;
}


int main()
{
    cout << "contoh fungsi: " << endl;
    fungsi();
    fungsi();
    cout << endl;

    cout << "hitung (bentuk dasar): " << endl;
    hitung(9, 4);
    cout << endl;

    cout << "hitung (bentuk parameter aktual): " << endl;
    int a=5, b=7;
    hitung(a,b); //parameter aktual
    cout << endl;

    cout << "luas permukaan kubus:\ncontoh 1" << endl;
    kubus (9,9);
    cout << endl;

    cout << "luas permukaan kubus:\ncontoh 2" << endl;
    float panjang = 6.5, lebar = 3.2;
    kubus (panjang, lebar);
    cout << endl;

    cout << "untuk void fungsi:" << endl;
    float x = balok(3.3, 5.4);
    cout << x << endl;

    float y = segitiga (4, 2);
    cout << y << endl;
    
    cout << "untuk void fungsi jml" << endl;
    int bil1 = 5;
    int bil2 = 7;
    cout << jml(bil1, bil2) << endl;

    return 0;
}
