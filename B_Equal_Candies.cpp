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

        ll ans = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 1; i < n; i++)
        {
            ans += a[i] - a[0];
        }

        cout << ans << endl;
    }
}