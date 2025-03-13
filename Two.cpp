#include <bits/stdc++.h>
using namespace std;

void bubble_sort_on_lastDigit(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] % 10 > arr[j + 1] % 10)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else if (arr[j] % 10 == arr[j + 1] % 10)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {105, 32, 88, 87, 19, 25, 40, 91, 57, 9};
    bubble_sort_on_lastDigit(arr, 10);

    return 0;
}