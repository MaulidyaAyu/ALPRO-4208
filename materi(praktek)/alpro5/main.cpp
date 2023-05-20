#include <iostream>
#include <bits/stdc++.h>
/*
minggu 6 - MAULIDYA AYU A
*/
using namespace std;

//untuk cek array benar atau tidak
bool isSorted (int a[], int n) {
    while (--n > 1)
        if (a[n] < a[n-1])
            return false;
    return true;
}

//untuk generate permutasi dari array
void shuffle(int a[], int n) {
    for (int i = 0; i< n; i++)
        swap(a[i], a[rand() % n]);//dikasi modulus n agar angka randomnya gak lebih dari jumlah element array
}

//sorts array a[0...n-1] using bogo sort
void bogoSort (int a[], int n) {
    int step = 0;
    //if array not sorted then shuffle
    //the array again
    while (!isSorted(a, n)) {
        shuffle(a, n);
        step++;
    }
    cout << "Step: " << step << endl;
}

//prints array
void printArray (int a[], int n) {
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
}

//drive code
int main()
{
    int a[] = {3, 2, 5, 1, 0, 4};
    int n = sizeof a / sizeof a[0];
    bogoSort(a, n);
    cout << "Sorted array: " << endl;
    printArray (a, n);
    cout << endl;

    return 0;
}
