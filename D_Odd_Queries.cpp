#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        ll a[n], l, r, k;
        ll sum = 0;
        ll indexsum[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            indexsum[i] = sum;
        }

        ll final = 0;

        for (int j = 0; j < q; j++)
        {            
            cin >> l >> r >> k;
            if (l > 1)
            {
                final = sum + (k*(r-l+1)) - (indexsum[r-1] - indexsum[l-2]);
            }
            else
            {
                final = sum + (k*(r-l+1)) - (indexsum[r-1]);
            }
            if (final % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}