#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(a, a % b);
    }
}
signed main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int g = INT_MAX;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            if (i > 0)
            {
                g = min(g, v[i] - v[i - 1]);
            }
        }
        if (a == 1)
        {
            cout << 1 << endl;
        }
        int t = gcd(360, g);
        int l = 360 / t;
        cout << l - a << "\n";
    }
    return 0;
}
