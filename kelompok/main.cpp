#include <iostream>
/*
bubble sort
neena
*/
using namespace std;

void bubbleSort (int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap (arr[j], arr[j+1]);
            }
        }
        cout << "Hasil loop i ke-" << i << " = " << endl;
        for(int k=0; k<n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl << endl;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int x;
    cout << "Banyak elemen dalam array = ";
    cin >> x;
    int arr[x];
    for (int i=0; i<x; i++) {
        cout << "elemen " << i+1 << " = ";
        cin >> arr[i];
    }
    cout << endl;
    cout << "sebelum diurutkan:" << endl;
    for (int i=0; i<x; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    int a = sizeof(arr)/sizeof(int);
    bubbleSort(arr, a);
    cout << endl;
    cout << "setelah diurutkan:" << endl;
    printArray(arr, a);

    return 0;
}
