#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = i + 1; j < 2 * n; j++)
            {
                if (a[i] > a[j])
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }

        for (int i = 0; i < 2 * n - 2; i++)
        {
            if (a[i] == a[i + 1] && a[i + 1] == a[i + 2])
                count += 2;
        }
        if (count > 2 || count == 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
