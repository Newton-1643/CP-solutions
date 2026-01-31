// This code is not yet complete
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort (b, b+n);

        ll diff;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            diff = abs(a[i] - b[i]);
            ans = max(diff, ans);
        }

        if (ans == 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << ans << '\n';
        }        
    }
}