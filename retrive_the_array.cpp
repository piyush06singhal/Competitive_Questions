#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long long int a[n];
        long long int b[n];
        long long int sa = 0;
        long long int sb = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> b[i];
            sb += b[i];
        }
        sa = sb / (n + 1);
        for (long long int i = 0; i < n; i++)
        {
            cout << b[i] - sa << " ";
        }
        cout << endl;
    }
}
