#include <iostream>

using namespace std;

//contoh fungsi rekursif
int faktorial_r (int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n*faktorial_r(n-1);
    }
}

//fibonacci
int fib(int n) {
    if (n<=1)
        return n;
    else
        return fib(n-2) + fib(n-1);
}

//nilai max dan min dalam array
int minValRec (int A[], int n) {
    if (n==1)
        return A[0];
    return min(A[n-1], minValRec(A, n-1));
}

int maxValRec (int A[], int n) {
    if (n==1)
        return A[0];
    return max(A[n-1], maxValRec(A, n-1));
}

//nilai max dan min ends



void BubbleSort_Rekursif(int arr[], int n) {
    if (n==1)
        return;
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    BubbleSort_Rekursif(arr, n-1);
}

//SELECTION SORT
void SelectionSort_Rekursif(int arr[], int n, int i) {
    // Base case
    if (i >= n - 1)
        return;

    int minN = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minN]) {
            minN = j;
        }
    }

    swap(arr[i], arr[minN]);

    // Recursive call for the remaining unsorted part
    SelectionSort_Rekursif(arr, n, i + 1);
}


//INSERTION SORT
void InsertionSort_Recursive(int arr[], int n) {
    // Base case
    if (n <= 1)
        return;

    // Urutkan array kecil dengan ukuran n-1 secara rekursif
    InsertionSort_Recursive(arr, n - 1);

    // Masukkan elemen terakhir ke posisi yang tepat dalam array yang sudah diurutkan
    int last = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

//LINEAR SEARCHING
int LinearSearch_Recursive(int arr[], int start, int end, int target) {
    // Base case: target tidak ditemukan
    if (start > end)
        return -1;

    // Base case: target ditemukan
    if (arr[start] == target)
        return start;

    // Recursive case: cari target di elemen berikutnya
    return LinearSearch_Recursive(arr, start + 1, end, target);
}

//BINARY SEARCHING
int BinarySearch_Recursive(int arr[], int start, int end, int target) {
    // Base case: target tidak ditemukan
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    // Base case: target ditemukan
    if (arr[mid] == target)
        return mid;

    // Recursive case: cari target di setengah array yang sesuai
    if (arr[mid] > target)
        return BinarySearch_Recursive(arr, start, mid - 1, target);
    else
        return BinarySearch_Recursive(arr, mid + 1, end, target);
}

int main()
{
    //output fungsi rekursif
    int total;
    total = faktorial_r(4);
    cout << "faktorial dari 4! adalah " << total << endl;

    //output fibonacci
    int n;
    cout << "masukkan angka = ";
    cin >> n;
    int fibonacci = fib(n);
    cout << fibonacci << endl;

    {
        int arr[] = {6, 8, 45, 80,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array: " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "array terkecil = ";
    cout << minValRec(arr, n);
    cout << endl;
    cout << "array terbesar = ";
    cout << maxValRec(arr, n);
    }

    cout << endl << endl;

    {//BUBBLE SORT
    int arr[] = {6, 8, 45, 80,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array bubble: " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    BubbleSort_Rekursif(arr, n);

    cout << "Array bubble setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    }
    cout << endl << endl;


    {//SELECTION SORT
    int arr[] = {6, 3, 5, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array selection:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    SelectionSort_Rekursif(arr, n, 0);

    cout << "Array selection setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    }

    //INSERTION SORT
    {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    InsertionSort_Recursive(arr, n);

    cout << "Array insertion setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    }

    //LINEAR SEARCH
    {
    int arr[] = {5, 9, 3, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    cout << "Array linear:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = LinearSearch_Recursive(arr, 0, n - 1, target);

    if (index != -1) {
        cout << "Target ditemukan di indeks ke-" << index << endl;
    } else {
        cout << "Target tidak ditemukan dalam array" << endl;;
    }
        cout << endl;
    }

    //BINARY SEARCH
    {
    int arr[] = {2, 5, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    cout << "Array binary:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = BinarySearch_Recursive(arr, 0, n - 1, target);

    if (index != -1) {
        cout << "Target ditemukan di indeks: " << index << endl;
    } else {
        cout << "Target tidak ditemukan dalam array" << endl;
    }
    }

    //pointer dasar
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
