#include <iostream>

void bubble_sort(int arr[], size_t arr_size){
    for (size_t i = 0; i < (arr_size - 1); i++) {
        for (size_t j = 0; j < (arr_size - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_arr(int arr[], size_t arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {2, 1, 5, 3, 4};
    std::cout << "unsorted : ";
    print_arr(arr, 5);
    bubble_sort(arr, 5);
    std::cout << "\nsorted : ";
    print_arr(arr, 5);
    return 0;
}