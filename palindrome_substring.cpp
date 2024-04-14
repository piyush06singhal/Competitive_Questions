#include <bits/stdc++.h>
using namespace std;
void Solve()
{
    int N;
    cin >> N;
    string a;
    cin >> a;
    if (N == 1)
    {
        cout << "BOB" << endl;
        return;
    }
    if (N == 2)
    {
        if (a[0] == a[1])
        {
            cout << "ALICE" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
        return;
    }
    bool Found = true;
    int ATurns = 0;
    int BTurns = 0;
    int Zeroes = 0;
    int Ones = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == '0')
        {
            Zeroes++;
        }
        else
        {
            Ones++;
        }
    }
    for (int i = 0; i < N - 2; i++)
    {
        if (i % 2 == 0)
        {
            ATurns++;
        }
        else
        {
            BTurns++;
        }
    }
    if (N % 2 == 0)
    {
        if (ATurns >= Zeroes || ATurns >= Ones)
        {
            cout << "ALICE" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
    }
    else
    {
        if (BTurns >= Zeroes || BTurns >= Ones)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "ALICE" << endl;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
}
