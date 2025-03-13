#include <bits/stdc++.h>
using namespace std;
void selection_sort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }

        // swap smallestIdx and i
        int temp = arr[i];
        arr[i] = arr[smallestIdx];
        arr[smallestIdx] = temp;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int a[] = {5, 1, 4, 2, 8};
    selection_sort(a, 5);

    return 0;
}