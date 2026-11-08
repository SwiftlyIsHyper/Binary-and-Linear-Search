// Rashaud Simmons
// Linear And Binary search

#include <stdio.h>
#define SIZE 7

int linear_search(int list[], int size, int target);
int binary_search(int list[], int size, int target);

int main() {

    int numbers[SIZE] = {3, 7, 9, 11, 15, 18, 21};
    printf("%d\n", linear_search(numbers, SIZE, 11));
    printf("%d\n", linear_search(numbers, SIZE, 13));
    printf("%d\n", binary_search(numbers, SIZE, 15));
    printf("%d\n", binary_search(numbers, SIZE, 13));

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