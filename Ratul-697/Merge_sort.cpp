#include<iostream>
using namespace std;

void Merge(int* A, int p, int q, int r) {
    int n1 = q - p + 1, n2 = r - q;

    int L[n1], R[n2];

    // Fill L and R arrays with appropriate values from A
    for (int i = 0; i < n1; i++) {
        L[i] = A[p + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[q + 1 + i];
    }

    // Add sentinel values to both L and R
    L[n1] = 1000; // or INT_MAX
    R[n2] = 1000; // or INT_MAX

    int i = 0, j = 0;

    // Merge the two sorted arrays into A
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void Merge_sort(int* A, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        Merge_sort(A, p, q); // Recursively sort the left half
        Merge_sort(A, q + 1, r); // Recursively sort the right half
        Merge(A, p, q, r); // Merge the sorted halves
    }
}

int main() {
    int arr[10] = {2, 5, 3, 7, 3, 4, 9, 23, 22, 2};

    Merge_sort(arr, 0, 9); // Sort the array

    // Output the sorted array
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}
