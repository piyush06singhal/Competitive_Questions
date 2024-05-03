
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int count = 2 * (r - l + 1) - 1;
        cout << count << endl;
    }
    return 0;
}
