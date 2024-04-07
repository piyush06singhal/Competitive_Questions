#include <bits/stdc++.h>
using namespace std;
int main()
{
    int st;
    cin >> st;
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double a = pow((x2 - x1), 2) + pow((y2 - y1), 2);
        double b = pow((x3 - x1), 2) + pow((y3 - y1), 2);
        double c = pow((x3 - x2), 2) + pow((y3 - y2), 2);
        double m = abs(a - b);
        double n = abs(a - c);
        double o = abs(b - c);
        int f[3];
        f[0] = a, f[1] = b;
        f[2] = c;
        sort(f, f + 3);
        if (st == 1)
        {
            if (m > pow(10, -6) && n > pow(10, -6) && o > pow(10, -6))
                cout << "Scalene triangle" << endl;
            else if (m < pow(10, -6) || n < pow(10, -6) || o < pow(10, -6))
                cout << "Isosceles triangle" << endl;
        }
        else if (st == 2)
        {
            if (m > pow(10, -6) && n > pow(10, -6) && o > pow(10, -6))
            {
                if (abs(a - (b + c)) < pow(10, -6) || abs(b - (a + c)) < pow(10, -6) || abs(c - (a + b)) < pow(10, -6))
                    cout << "Scalene right triangle" << endl;
                else if (f[2] > (f[0] + f[1]))
                    cout << "Scalene obtuse triangle" << endl;
                else if (f[2] < (f[0] + f[1]))
                    cout << "Scalene acute triangle" << endl;
            }
            else if (m < pow(10, -6) || n < pow(10, -6) || o < pow(10, -6))
            {
                if (abs(a - (b + c)) < pow(10, -6) || abs(b - (a + c)) < pow(10, -6) || abs(c - (a + b)) < pow(10, -6))
                    cout << "Isosceles right triangle" << endl;
                else if (f[2] > (f[0] + f[1]))
                    cout << "Isosceles obtuse triangle" << endl;
                else if (f[2] < (f[0] + f[1]))
                    cout << "Isosceles acute triangle" << endl;
            }
        }
    }
    return 0;
}
