#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int o = 0;
        int z = 0;
        int i = 0;
        int c = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                c++;
            }
            i++;
        }
        if (c > k)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '1' && k > 0)
                {
                    s[j] = '0';
                    k--;
                }
            }
            cout << s << endl;
        }
        else
        {
            for (int j = 0; j < (n - k); j++)
            {
                cout << '0';
            }
            cout << endl;
        }
    }
}
