#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, sum = 0;
    bool found = false;

    for (int r = 0; r < n; r++)
    {
        sum += arr[r];
        while (sum > target)
            sum -= arr[l++];
        if (sum == target)
        {
            cout << "Subarray from " << l << " to " << r << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "No subarray found" << endl;
}
