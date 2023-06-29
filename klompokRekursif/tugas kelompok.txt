#include <iostream>
/*
Tugas Kelompok
1. Maulidya Ayu Ardiena         - A11.2022.14310
2. Yankhairunisa Zahra W. P.    - A11.2022.14328
3. Isna Nur Amalia              - A11.2022.14330

Buatlah fungsi rekursif dari:
1. 3 jenis sorting
2. Ukuran pointer
3. Linear search
4. Binary search
*/
using namespace std;

//BUBBLE SORT
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

    return 0;
}
