#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, p;
        cin >> n >> p;

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        ll b[n];
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        vector<pair<ll,ll>> v;
        for (int k = 0; k < n; k++)
        {
            v.push_back({b[k], a[k]});
        }

        sort(v.begin(), v.end());

        ll cnt = 0;
        ll ans = 0;

        ans += p;
        cnt++;

        ll l = 0;        
        while (cnt < n)
        {
            if(v[l].first < p)
            {
                ll req = min(v[l].second, n-cnt);
                cnt += req;
                ans += req * v[l].first;
                l++;
            }
            else
            {
                ans += (n-cnt) * p;
                break;
            }
        }

        cout << ans << '\n';
    }
}