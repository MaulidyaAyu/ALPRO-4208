#include <iostream>
/*
MAULIDYA AYU ARDIENA - A11.2022.14310
isEven
isOdd
isFactor
sumEven
sumOdd
maxN
minN
maxArray
minArray
isFound
swapN
*/
using namespace std;

bool isEven (int n) {
    return n % 2 == 0;
}

bool isOdd (int m) {
    return m % 2 == 1;
}

bool isFactor (int x, int y) {
    return x % y == 0;
}

int sumEven(int arr[], int a) {
    int sum = 0;
    for (int i = 0; i < a; i++)
        if (arr[i] % 2 == 0) sum += arr[i];
    return sum;
}

int sumOdd(int ar[], int b) {
    int sumodd = 0;
    for (int i = 0; i < b; i++)
        if (ar[i] % 2 == 1) sumodd += ar[i];
    return sumodd;
}

int maxN (int a, int b);

int minN (int a, int b);

int maxArray (int A[], int c);

int minArray (int B[], int d);

bool isFound(int elmn[], int q, int p) {
    for (int i = 0; i < q; i++) {
        if (elmn[i] == p) {
            return true;
        }
    }
    return false;
}

void swapN(int swapn[], int j, int k, int l) {
    for (int i = 0; i < j; i++) {
        if (swapn[i] == k) {
            swapn[i] = l;
        }
    }
}

int main()
{
    int n;
    cout << "1. Is Even" << endl;
    cout << "masukkan bilangan bulat = ";
    cin >> n;
    cout << (isEven(n) ? "Ya, " : "Tidak, ") << n << (isEven(n) ? " adalah " : " bukan ") << " bilangan genap " << endl;
    cout << endl;

    int m;
    cout << "2. Is Odd" << endl;
    cout << "masukkan bilangan bulat = ";
    cin >> m;
    cout << (isOdd(m) ? "Ya, " : "Tidak, ") << m << (isOdd(m) ? " adalah " : " bukan ") << " bilangan ganjil " << endl;
    cout << endl;

    int x, y;
    cout << "3. Is Factor" << endl;
    cout << "Masukkan bilangan pertama (bilangan pemfaktor) = ";
    cin >> x;
    cout << "Masukkan bilangan kedua (bilangan yang difaktorkan) = ";
    cin >> y;
    cout << y << (isFactor(x,y) ? " merupakan " : " bukan merupakan ") << "faktor dari " << x << endl;
    cout << endl;

    int a;
    cout << "4. Sum Even" << endl;
    cout << "Banyak angka yang akan diinput = ";
    cin >> a;
    int arr[a], sum;
    for (int i = 0; i < a; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << " = ";
        cin >> arr[i];
    }
    cout << "Jumlah bilangan genap dari array tersebut adalah " << sumEven(arr, a) << endl;
    cout << endl;

    int b;
    cout << "5. Sum Odd" << endl;
    cout << "Banyak angka yang akan diinput = ";
    cin >> b;
    int ar[b], sumodd;
    for (int i = 0; i < b; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << " = ";
        cin >> ar[i];
    }
    cout << "Jumlah bilangan ganjil dari array tersebut adalah " << sumOdd(ar, b) << endl;
    cout << endl;

    cout << "6. Max N" << endl;
    cout << "angka pertama = ";
    cin >> a;
    cout << "angka kedua = ";
    cin >> b;
    cout << "Angka terbesar dari " << a << " dan " << b << " adalah " << maxN(a, b) << endl;
    cout << endl;

    cout << "7. Min N" << endl;
    cout << "angka pertama = ";
    cin >> a;
    cout << "angka kedua = ";
    cin >> b;
    cout << "Angka terkecil dari " << a << " dan " << b << " adalah " << minN(a, b) << endl;
    cout << endl;

    int c;
    cout << "8. Max Array" << endl;
    cout << "Banyaknya elemen dalam array = ";
    cin >> c;
    int A[c];
    for (int i=0; i<c; i++) {
        cout << "element ke-" << i + 1 << " = ";
        cin >> A[i];
    }
    cout << "Angka terbesar dari elemen dalam array tersebut adalah " << maxArray(A, c) << endl;
    cout << endl;

    int d;
    cout << "9. Min Array" << endl;
    cout << "Banyaknya elemen dalam array = ";
    cin >> d;
    int B[d];
    for (int i=0; i<d; i++) {
        cout << "element ke-" << i + 1 << " = ";
        cin >> B[i];
    }
    cout << "Angka terkecil dari elemen dalam array tersebut adalah " << minArray(B, d) << endl;
    cout << endl;

    cout << "10. Is Found" << endl;
    int elmn[] = {1, 2, 3, 4, 5};
    int q = sizeof(elmn) / sizeof(elmn[0]);
    int p = 3;
    cout << (isFound(elmn, q, p) ? "Found" : "Not Found") << endl;
    cout << endl;

    cout << "11. Swap N" << endl;
    int swapn[] = {1, 2, 3, 4, 5};
    int j = sizeof(swapn) / sizeof(swapn[0]);
    int k = 3;
    int l = 6;
    swapN(swapn, j, k, l);
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

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

int minN (int a, int b) {
    int temp;
    if (a>b) {
        temp=b;
    }
    else {
        temp=a;
    }
    return temp;
}

int maxArray (int A[], int c) {
    int temp = 0;

    for (int i=0; i<c; i++) {
        if (A[i] > temp) temp = A[i];
    }
    return temp;
}

int minArray (int B[], int d) {
    int temp = B[0];

    for (int i=0; i<d; i++) {
        if (B[i] < temp) temp = B[i];
    }
    return temp;
}
