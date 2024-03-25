#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll k = 0;
        while (k < n)
        {
            cout << (sum / (n - 1)) - a[k] << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}

