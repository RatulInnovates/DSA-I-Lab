#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr, int n)
{

    // maxnum as size for frequency array
    int maxnum = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxnum)
            maxnum = arr[i];
    }

    // frequency array
    int fr[maxnum + 1];
    for (int i = 0; i < maxnum + 1; i++)
    {
        fr[i] = 0;
    }

    // counting frequency
    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
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

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Frequencies: " << endl;
    for (int i = 0; i < maxnum + 1; i++)
    {
        if (fr[i] > 0)
            cout << i << " -> " << fr[i] << " times" << endl;
    }
}

int main()
{
    int a[] = {4, 1, 4, 2, 1, 4, 3, 2};
    bubble_sort(a, 8);

    return 0;
}