#include <iostream>

using namespace std;

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

int main()
{
    int arr[] = {6, 3, 5, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    SelectionSort_Rekursif(arr, n, 0);

    cout << "Array setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
