//
// Created by Arshia on 2024-11-11.
//

#include <cstdio>
#include <cstdlib>

void merge_sort(int * A, int l, int r) {
    int m = l + (r - l - 1) / 2;

//    printf("\n");
//    for (int i = l; i <= r; i++)
//        printf("%d, ", A[i]);

    if (l >= r)
        return;
    if (r - l == 1) {
        if (A[l] > A[r]) {
            int temp = A[l];
            A[l] = A[r];
            A[r] = temp;
        }
//        printf("\nSorted!\n%d, %d\n", A[l], A[r]);
        return;
    }

    merge_sort(A, l, m);
    merge_sort(A, m + 1, r);

    int i = l;
    int j = m + 1;
    int B[r - l + 1];
    int counter = -1;

    while (true) {
        counter++;
        if (i == m + 1) {
            if (j == r + 1)
                break;
            else {
//                printf("\nSelected: %d", A[j]);
                B[counter] = A[j];
                j++;
            }
        }
        else if (j == r+1) {
//            printf("\nSelected: %d", A[i]);
            B[counter] = A[i];
            i++;}
        else if (A[i] < A[j]) {
//            printf("\nSelected: %d", A[i]);
            B[counter] = A[i];
            i++;
        } else {
//            printf("\nSelected: %d", A[j]);
            B[counter] = A[j];
            j++;
        }


    }

//    printf("\n Sorted subset! \n");
    for (int k = l; k <=r; k++){
//        printf("%d, ", B[k]);
        A[k] = B[k-l];
    }
//    printf("\n");
}

int main(){
    int A[] = {14, 45, 3, 100, 10,60, 33};
    int l = 0; int r =  sizeof(A)/sizeof(int) - 1;
    int size = r+1;

    printf("\nInitial Array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ,", A[i]);

    merge_sort(A, l, r);

    printf("\nSorted Array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ,", A[i]);

    return 0;
}




