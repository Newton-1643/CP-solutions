#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h;
        cin >> w >> h;

        ll ans = 0;

        int k;
        cin >> k;
        vector<ll> horizontal1(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> horizontal1[i];
        }
        ans = (horizontal1[k-1] - horizontal1[0]) * h;

        int l;
        cin >> l;
        vector<ll> horizontal2(l);
        for (ll j = 0; j < l; j++)
        {
            cin >> horizontal2[j];
        }
        ans = max(ans, ((horizontal2[l-1] - horizontal2[0]) * h));

        int m;
        cin >> m;
        vector<ll> vertical1(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> vertical1[i];
        }
        ans = max(ans, ((vertical1[m-1] - vertical1[0]) * w));

        int n;
        cin >> n;
        vector<ll> vertical2(n);
        for (ll j = 0; j < n; j++)
        {
            cin >> vertical2[j];
        }
        ans = max(ans, ((vertical2[n-1] - vertical2[0]) * w));

        cout << ans << '\n';
    }
}