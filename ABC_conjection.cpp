#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        queue<int> q;
        int c = -1;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                if (a[i] == 'b')
                {
                    c = i;
                }
            }
            else if (a[i] == 'a' && b[i] == 'c')
            {
                q.push(i);
            }
            else if (a[i] == 'c' && b[i] == 'a')
            {
                if (!q.empty() && q.front() < c)
                {
                    q.pop();
                }
                else
                {
                    cout << "No" << endl;
                    flag = false;
                    break;
                }
            }
            else
            {
                cout << "No" << endl;
                flag = false;
                break;
            }
        }
        if (flag && q.empty())
        {
            cout << "Yes" << endl;
        }
        else if (flag)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
