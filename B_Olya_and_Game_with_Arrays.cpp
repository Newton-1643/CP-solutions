#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll req1 = LLONG_MAX;
        ll req2 = LLONG_MAX;
        ll ans = 0;

        for (ll j = 0; j < n; j++)
        {
            ll m;
            cin >> m;

            vector<ll> v(m);
            for (ll i = 0; i < m; i++)
            {
                cin >> v[i];
            }

            sort(v.begin(), v.end());
            
            req1 = min(req1, v[0]);
            req2 = min(req2, v[1]);
            ans += v[1];
        }

        ans += (req1 - req2);

        cout << ans << '\n';
    }
}