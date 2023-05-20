#include <iostream>

using namespace std;


bool ganjil (int n) {
    if (n%2 == 0){
        return false;
    }
    else {
        return true;
    }
}

void genap (int arr[], int n) {
    int minN = arr[0];
    int x = 0;
    for (int i=0; i<n; i++){
        if (!ganjil(arr[i]) && arr[i] < minN){
            minN = arr[i];
            x = i;
        }
    }
    cout << "genap terkecil = " << minN << endl;
    cout << "ada di index " << x << endl;
}

void bubble (int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++)
            if (arr[j]<arr[j+1])
                swap (arr[j], arr[j+1]);
    }
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection (int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minN = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] > arr[minN]) {
                minN = j;
            }
        }
        swap (arr[i], arr[minN]);
    }
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print (int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {6, 7, 4, 3, 2};
    int n = sizeof(arr)/sizeof(int);

    genap (arr, n);

    cout << "bubble ";
    bubble (arr, n);
    cout << "selection ";
    selection (arr, n);
    return 0;
}
