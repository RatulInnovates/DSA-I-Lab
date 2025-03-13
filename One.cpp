#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr, int n)
{
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swapCount++;

                cout << "Before Swap: [";
                for (int k = 0; k < n; k++)
                {
                    cout << arr[k];
                    if (k != n - 1)
                        cout << ", ";
                }
                cout << "] " << "(Swapping " << arr[j] << " and " << arr[j + 1] << ")" << endl;

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                cout << "After Swap: [";
                for (int k = 0; k < n; k++)
                {
                    cout << arr[k];
                    if (k != n - 1)
                        cout << ", ";
                }
                cout << "]" << endl;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int k = 0; k < n; k++)
    {
        cout << arr[k];
        if (k != n - 1)
            cout << ", ";
    }

    cout << endl
         << "Total Number of Swaps: " << swapCount;
}

int main()
{
    int a[] = {5, 1, 4, 2, 8};
    bubble_sort(a, 5);

    return 0;
}