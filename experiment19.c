#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // return the index where the element is found
        }
    }
    return -1; // return -1 if the element is not found
}

int main() {
    int array[] = { 1,2,3,4,5,6,7 };
    int size = sizeof(array) / sizeof(array[0]);
    int key = 6;

    int result = linearSearch(array, size, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}