#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *data, int data_size, int *idx, int idx_size)
{
    int n = idx_size;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = data[idx[i]];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < idx_size; i++)
    {
        data[idx[i]] = arr[i];
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < data_size; i++)
    {
        cout << data[i] << " ";
    }
}

int main()
{
    int Data[] = {9, 100, 23, 45, 18, 21, 33, 3, 32, 1};
    int Indexes[] = {0, 2, 3, 4, 7, 9};

    bubble_sort(Data, 10, Indexes, 6);

    return 0;
}