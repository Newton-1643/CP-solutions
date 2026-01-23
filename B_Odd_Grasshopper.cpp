#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x, n;
        cin >> x >> n;

        if (x % 2 == 0)
        {
            if (n % 4 == 0)
            {
                cout << x << '\n';
            }
            else if (n % 4 == 1)
            {
                cout << x - n << '\n';
            }
            else if (n % 4 == 2)
            {
                cout << x + 1 << '\n';
            }
            else
            {
                cout << x + n + 1 << '\n';
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << x << '\n';
            }
            else if (n % 4 == 1)
            {
                cout << x + n << '\n';
            }
            else if (n % 4 == 2)
            {
                cout << x - 1 << '\n';
            }
            else
            {
                cout << x - n - 1 << '\n';
            }
        }
    }
}