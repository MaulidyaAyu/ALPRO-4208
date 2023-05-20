#include <iostream>
/*
latihan sorting

*/
using namespace std;

void bubblesort(int arr[], int n) {
    for(int i=0; i < n-1; i++) {
        for(int j=0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int minN = i;
        for (int j=i + 1; j<n; j++) {
            if (arr[j] < arr[minN]) {
                minN = j;
            }
        }
        swap(arr[i], arr[minN]);
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionsort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        while (key < arr[j] && j >= 0) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

//mergesort start
void merger(int arr[], int p, int q, int r) {

  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergesort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);

    merger(arr, l, m, r);
  }
}
//mergesort end

//quickort start
int partisi(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low-1;

    for (int j=low; j<high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}

void quicksort (int arr[], int low, int high) {
    if (low<high) {
        int p = partisi (arr, low, high);
        quicksort(arr, low, p-1);
        quicksort(arr, p+1, low);
    }
}
//quicksort end

int linear(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int binary(int arr[], int x, int low, int high) {
    if(high>=low) {
        int mid = low + (high-low) / 2;

        if(arr[mid]== x)
            return mid;

        if (arr[mid] > x)
            return binary(arr, x, low, mid-1);

        if (arr[mid] < x)
            return binary(arr, x, mid+1, high);
    }
    return -1;
}

void print(int arr[], int n) {
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    //bubble sort start
    {
        int arr[] = {4,2,7,0,8};
        int n = sizeof(arr)/sizeof(int);
        bubblesort(arr, n);
    }
    //bubble sort end



    //selection sort start
    {
        int arr[] = {1,9,7,3,5};
        int n = sizeof(arr)/sizeof(int);
        selectionsort(arr, n);
    }
    //selection sort end


    //insertion sort start
    {
        int arr[] = {4,9,7,3,5};
        int n = sizeof(arr)/sizeof(int);
        insertionsort(arr, n);
    }
    //insertion sort end

    //mergesort start
    {
        int arr[] = {4,9,2,3,8};
        int n = sizeof(arr)/sizeof(int);
        mergesort(arr, 0, n-1);
        print(arr, n);
    }
    //mergesort end


    //quicksort start
    {
        int arr[] = {4,0,7,2,5};
        int n = sizeof(arr)/sizeof(int);
        quicksort(arr, 0, n-1);
        print(arr, n);
    }
    //quicksort end


     //linear search start
    {
        int arr[] = {9,0,6,1,4};
        int n = sizeof(arr)/sizeof(int);
        int x=1;
        int result = (linear(arr, n, x)) + 1;
        if (result==-1) {
            cout << "dalam array {9,0,6,1,4}, angka 1 tidak ada" << endl;
        }
        else {
            cout << "dalam array {9,0,6,1,4}, angka 1 ada di elemen ke " << result << endl;
        }
    }
    //linear search end


    //binary search start
    {
        int arr[] = {6,3,8,1,9};
        int x=3;
        int n = sizeof(arr)/sizeof(int);
        int result = binary(arr, x, 0, n-1);
        if (result == -1) {
            cout << "tidak ada elemen angka " << x << " dalam array" << endl;
        }
        else {
            cout << "elemen angka " << x << " terdapat pada array ke " << result << endl;
        }
    }
    //binary search end

    return 0;
}

