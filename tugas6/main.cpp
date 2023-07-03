#include <iostream>
#include <vector>
using namespace std;

// Fungsi pencarian linier dengan time complexity O(n) dan space complexity O(1)
int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Fungsi pencarian biner (binary search) dengan time complexity O(log n) dan space complexity O(1)
int binarySearch(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

// Fungsi untuk mencetak elemen-elemen vektor
void printVector(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

// Bubble Sort dengan time complexity O(n^2) dan space complexity O(1)
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Insertion Sort dengan time complexity O(n^2) dan space complexity O(1)
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort dengan time complexity O(n^2) dan space complexity O(1)
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    vector<int> numbers = {1, 3, 5, 7, 9};

    int target;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    // Pencarian linier
    int linearIndex = linearSearch(numbers, target);
    if (linearIndex != -1)
    {
        cout << "Angka ditemukan pada indeks " << linearIndex << " (linear search)" << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan (linear search)" << endl;
    }

    // Pencarian biner
    int binaryIndex = binarySearch(numbers, target);
    if (binaryIndex != -1)
    {
        cout << "Angka ditemukan pada indeks " << binaryIndex << " (binary search)" << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan (binary search)" << endl;
    }

    cout << "Array sebelum diurutkan: ";
    printVector(numbers);

    // Bubble Sort
    cout << "\nBubble Sort:" << endl;
    bubbleSort(numbers);
    cout << "Array setelah diurutkan (Bubble Sort): ";
    printVector(numbers);

    // Insertion Sort
    cout << "\nInsertion Sort:" << endl;
    insertionSort(numbers);
    cout << "Array setelah diurutkan (Insertion Sort): ";
    printVector(numbers);

    // Selection Sort
    cout << "\nSelection Sort:" << endl;
    selectionSort(numbers);
    cout << "Array setelah diurutkan (Selection Sort): ";
    printVector(numbers);

    return 0;
}
