#include <stdio.h>

// Function to delete an element at a specified position
void deleteElement(int arr[], int *size, int position) {
    // Check if the position is valid
    if (position >= *size || position < 0) {
        printf("Invalid position!\n");
        return;
    }
    
    // Shift elements to the left to fill the gap
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrease the size of the array
    (*size)--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Specify the position of the element to delete
    int position = 2;

    // Delete the element
    deleteElement(arr, &size, position);

    // Print the array after deletion
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
