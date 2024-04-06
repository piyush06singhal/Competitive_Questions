#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        k = min(k, n / 2);
        if (n == 1)
            cout << 0 << endl;
        else
            cout << (2 * n * k) - (2 * k * k) - k << endl;
    }
    return 0;
}
