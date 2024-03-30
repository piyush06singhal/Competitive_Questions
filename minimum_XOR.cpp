#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int b[a];
        cin >> b[0];
        int minValue = b[0], small = 1000000;
        for (int i = 1; i < a; i++)
        {
            cin >> b[i];
            minValue = minValue ^ b[i];
        }
        small = minValue;
        if (minValue == 0)
        {
            cout << minValue << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                int temp = minValue ^ b[i];
                if (small > temp)
                {
                    small = temp;
                }
            }
            cout << small << endl;
        }
    }
    return 0;
}