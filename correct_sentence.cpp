#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, k;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> k;
        int a = 0;
        string s[k];
        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
            int p = 0, q = 0;
            string r = s[i];
            int n = r.size();
            for (int i = 0; i < n; i++)
            {
                if ((r[i] >= 'a') && (r[i] <= 'm'))
                {
                    p++;
                }
                if ((r[i] >= 'N') && (r[i] <= 'Z'))
                {
                    q++;
                }
            }
            if ((p == n) || (q == n))
            {
                a++;
            }
        }
        if (a == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
