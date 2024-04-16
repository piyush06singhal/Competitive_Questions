#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0, b = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                b++;
                ans = max(ans, b);
            }
            else
            {
                b = 0;
            }
        }
        cout << ans + c << endl;
    }
    return 0;
}
