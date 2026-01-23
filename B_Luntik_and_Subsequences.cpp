#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll power (int cnt0)
{
    ll result = 1;
    for (int i = 1; i <= cnt0; i++)
    {
        result *= 2;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int cnt1 = 0;
        int cnt0 = 0;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                cnt1++;
            }
            else if (a[i] == 0)
            {
                cnt0++;
            }
        }

        if (cnt1 == 0)
        {
            cout << "0\n";
        }
        else
        {
            if (cnt0 == 0)
            {
                cout << cnt1 << '\n';
            }
            else
            {
                cout << cnt1 * power(cnt0) << '\n';
            }
        }
    }
}