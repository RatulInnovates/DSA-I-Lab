#include <bits/stdc++.h>
using namespace std;

void binary_search_for_sqrRoot(int num)
{

    int l = 0;
    int r = num / 2;
    int sqrRoot = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid * mid == num)
        {
            sqrRoot = mid;
            break;
        }
        else if (mid * mid < num)
        {
            sqrRoot = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    if (sqrRoot == -1)
        cout << "Not a perfect Square";
    else
        cout << "Square root: " << sqrRoot;
}

int main()
{
    binary_search_for_sqrRoot(25);

    return 0;
}