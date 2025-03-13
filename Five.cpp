#include <bits/stdc++.h>
using namespace std;

void binary_search(int *arr, int n, int target)
{

    int l = 0;
    int r = n - 1;

    int first = -1;
    int last = -1;

    // moves left for first occurence
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            r = mid - 1;
        }
        else if (arr[mid] > target)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    l = 0;
    r = n - 1;

    // moves right for last occurence
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            l = mid + 1;
        }
        else if (arr[mid] > target)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    if (first != -1)
        cout << "First: " << first << endl;
    if (last != -1)
        cout << "Last: " << last << endl;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    binary_search(arr, 7, 2);

    return 0;
}