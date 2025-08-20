#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, r = n - 1, mid;
    bool found = false;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (arr[mid] == target)
        {
            found = true;
            break;
        }
        else if (arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }

    if (found)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}
