#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        int mid = (l + 1) / 2;
        if (n <= mid)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= mid; i++)
            {
                cout << i << " ";
            }
            for (int i = mid + 1; i <= n; i++)
            {
                mid = mid + l;
                cout << mid << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
