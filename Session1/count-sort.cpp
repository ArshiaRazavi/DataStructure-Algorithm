//
// Created by seyedarshia.razavi on 2024-09-26.
//

// #include <iostream>
// using namespace std;

#include <cstdio>
#include <cstdlib>


// void count_sort(int A[], int size) {
//     // find the maximum
//     int A_max = A[0];
//     for (int i = 0; i < size; i++) {
//         if (A[i] > A_max)
//             A_max = A[i];
//     }
//
//     // Initialize count array
//     int count[A_max+1] = {0};
//
//     // Counting
//     for (int i = 0; i < size; i++) {
//         count[A[i]] ++;
//     }
//
//     int output[size] = {0};
//     int counter = 0;
//     // Rearranging the array
//     for (int i = 0; i < A_max+1; i++) {
//         // cout << count[i] << endl << endl;
//         for (int j = 0; j < count[i]; j++) {
//             // cout << i << " ";
//             // cout << counter << endl;
//             output[counter] = i;
//             counter++;
//         }
//         // cout << endl;
//     }
//
//     // Printing the output
//     for (int i = 0; i < size; i++) {
//         cout << output[i] << " ";
//     }
// }

int main() {

    // int A[] = {1, 2, 3, 4, 4, 3, 1, 4};
    // int size = sizeof(A) / sizeof(int);
    //
    // count_sort(A, size);

    int a = 0b10111;
    printf("%d", a);
}