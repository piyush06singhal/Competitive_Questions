#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        long long count = 0;
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            long long numerator = 3 * v[i] * 1l;
            long long denominator = v[i] - 1;
            if (denominator != 0 && numerator % denominator == 0)
            {
                long long tofind = numerator / denominator;
                if (mpp.find(tofind) != mpp.end())
                    count += mpp[tofind];
            }
            mpp[v[i]]++;
        }
        cout << count << endl;
    }
    return 0;
}
