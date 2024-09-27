//
// Created by seyedarshia.razavi on 2024-09-26.
//

#include <cstdio>
#include <cstdlib>


void count_sort(int *A, int size) {
    if (size == 0) return;  // Edge case: empty array

    // Find the maximum value in A
    int max = A[0];
    for (int i = 1; i < size; i++)
        if (A[i] > max) max = A[i];

    // Allocate memory for count array
    int *count = (int*) malloc((max + 1) * sizeof(int));
    if (count == nullptr) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Initialize count array to 0
    for (int i = 0; i <= max; i++)
        count[i] = 0;


    // Count occurrences of each element in A
    for (int i = 0; i < size; i++)
        count[A[i]]++;


    int counter = 0;
    // Rearrange elements in A based on counts
    for (int i = 0; i <= max; i++)
        for (;count[i] > 0;count[i]--)
            A[counter++] = i;

    // Free dynamically allocated memory
    free(count);
}

int main() {
    int A[] = {1, 12, 30, 4, 4, 3, 1, 4, 0, 10};
    int size = sizeof(A) / sizeof(int);

    printf("Initial Array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);

    count_sort(A, size);

    printf("\nSorted Array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
}