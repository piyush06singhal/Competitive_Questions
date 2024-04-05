#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, cnt = 0, ans = 0;
        cin >> n >> x;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
            {
                cnt++;
            }
        }
        if (cnt == 0 and (x % 2 == 0))
        {
            cout << -1 << endl;
        }
        else if ((x % 2 == 0))
        {
            cout << (n - cnt) << endl;
        }
        else
        {
            cout << ((n - cnt) / 2) + (n - cnt) % 2 << endl;
        }
    }
    // your code goes here
    return 0;
}
