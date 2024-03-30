#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % m == 0)
            {
                b++;
            }
        }
        cout << (1 << b) - 1 << endl;
    }
    return 0;
}