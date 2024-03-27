#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int N, diff = 0, step = 0;
    bool a = false;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    sort(array, array + (sizeof(array) / sizeof(array[0])));
    for (int i = 0; i < N; i++)
    {
        diff = array[i] - i;
        if (array[i] > i + 1)
        {
            a = true;
            break;
        }
        else if (diff == 0)
        {
            step++;
        }
        else if (diff < 0)
        {
            step = step + abs(diff) + 1;
        }
    }
    if (a == false)
    {
        cout << step << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }
    return 0;
}
