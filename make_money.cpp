#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c;
        cin >> n >> x >> c;
        int a[n];
        int cost = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            if (x - a[i] > c)
            {
                a[i] = x;
                cost += c;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        sum -= cost;
        cout << sum << endl;
    }
    return 0;
}