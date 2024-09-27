//
// Created by Arshia on 2024-09-26.
//
# include "cstdio"

void bubble_sort(int *A, int size){

    for (int min_sorted = 0; min_sorted < size-1; min_sorted++) {
        bool bubble_seen = false;
        for (int i = size - 1; i >= min_sorted+1; i--) {
            if (A[i] < A[i - 1]) {
                int temp = A[i];
                A[i] = A[i - 1];
                A[i - 1] = temp;
                bubble_seen = true;
            }
        }
        if (!bubble_seen)
            return;
    }
}


int main(){
    int A[] = {12 , 20, 40, 23, 11};
    int size = sizeof(A)/sizeof(int);
    printf("Initial Array: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    bubble_sort(A, size);

    printf("\nSorted Array: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);

    return 0;
}