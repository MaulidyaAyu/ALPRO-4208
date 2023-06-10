#include <iostream>
/*
MAULIDYA AYU A. - A11.2022.14310
PERTEMUAN 10
nilai minimal dan maksimal rekursif
*/
using namespace std;

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

int bubblesortrekursif (int arr[], int n) {
    if (n==1)
        return ;
    int count = 0;
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            count ++;
        }
    if (count == 0)
        return ;
    bubblesortrekursif(arr, n-1);
}

int main()
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
    cout << "array terurut = ";
    cout << bubblesortrekursif(arr, n);
    cout << endl;

    return 0;
}
