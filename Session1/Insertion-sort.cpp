//
// Created by Arshia on 2024-09-26.
//

# include "cstdio"

void insertion_sort(int *A, int size){
    if (size == 0) return;

    for (int i = 1; i < size; i++){
        int to_be_sorted = A[i];
        int k = i-1;
        for (;A[k] > to_be_sorted && k >= 0; k--)
            A[k + 1] = A[k];
        A[k+1] = to_be_sorted;
    }
}

int main(){
    int A[] = {12 , 20, 40, 23, 11};
    int size = sizeof(A)/sizeof(int);
    printf("Initial Array: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    insertion_sort(A, size);

    printf("\nSorted Array: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);

    return 0;
}