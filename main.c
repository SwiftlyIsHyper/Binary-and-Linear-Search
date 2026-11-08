// Rashaud Simmons
// Linear And Binary search

#include <stdio.h>
#define SIZE 7

int linear_search(int list[], int size, int target);
int binary_search(int list[], int size, int target);

int main() {

    int numbers[SIZE] = {3, 7, 9, 11, 15, 18, 21};
    printf("Linear search: %d\n", linear_search(numbers, SIZE, 11));
    printf("Linear search for absent element: %d\n", linear_search(numbers, SIZE, 13));
    printf("Binary search: %d\n", binary_search(numbers, SIZE, 15));
    printf("Binary search for absent element: %d\n", binary_search(numbers, SIZE, 13));

    int duplicates[SIZE] = {4, 4, 4, 4, 4, 6, 8};
    printf("Linear search for duplicates: %d\n", linear_search(duplicates, SIZE, 4));
    printf("Binary search for duplicates: %d\n", binary_search(duplicates, SIZE, 4));
    printf("Note: linear search returned the first occurrence (index 0), while binary search returned a different matching index (index 3), since binary search jumps straight to the middle of the range instead of checking elements in order");

}

int linear_search(int list[], int size, int target) {
    for (int i = 0; i < SIZE - 1 ; i++) {
        if (list[i] == target) {
            return i;
        }
    }
    return -1;
}

int binary_search(int list[], int size, int target) {
    int low = 0;
    int high = SIZE - 1;

    while (low <= high) {
        int mid = (low + high)/2;

        if (list[mid] == target){
            return mid;
        } else if(target < list[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}