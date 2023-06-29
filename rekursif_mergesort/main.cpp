#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Buat array sementara untuk menyimpan elemen-elemen yang akan diurutkan
    int L[n1], R[n2];

    // Salin elemen-elemen ke array sementara
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Gabungkan kembali dua array sementara ke dalam array utama
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen dari array L jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Salin sisa elemen dari array R jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort_Rekursif(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Panggil rekursif untuk setengah kiri dan kanan
        MergeSort_Rekursif(arr, left, mid);
        MergeSort_Rekursif(arr, mid + 1, right);

        // Gabungkan dua setengah yang telah diurutkan
        merge(arr, left, mid, right);
    }
}

int main()
{

    int arr[] = {6, 3, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    MergeSort_Rekursif(arr, 0, n - 1);

    cout << "Array setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
