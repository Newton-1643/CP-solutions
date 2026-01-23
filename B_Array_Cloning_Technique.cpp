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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort (a, a+n);
        ll cnt = 1;
        ll final = 1;
        
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] == a[i+1])
            {
                cnt++;
                final = max(final, cnt);
            }
            else
            {
                cnt = 1;
            }            
        }

        ll ans = 0;
        
        while (final < n)
        {
            ans++;

            ll take = min(final, n-final);
            ans += take;

            final += take;
        }

        cout << ans << '\n';
    }   
}

