//
// Created by Arshia on 2024-11-11.
//

#include "cstdio"

void selection_sort(int * A, int len, int start){
    if (len == start)
        return;

    int min = A[start];
    int index = start;

    for (int i = start+1; i < len; i++)
        if (A[i] < min) {
            min = A[i];
            index = i;
        }
    int temp = A[start];
    A[start] = A[index];
    A[index] = temp;
    selection_sort(A, len, start+1);
}

int main(){
    int A[] = {19, 400, 1, 4, 100, 7, 33};
    int size = sizeof(A)/sizeof(int);

    printf("\nInitial Array:\n");
    for (int i = 0;i < size; i++)
        printf("%d, ", A[i]);

    selection_sort(A, size, 0);

    printf("\nSorted Array:\n");
    for (int i = 0;i < size; i++)
        printf("%d, ", A[i]);

}