#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a, b);
}

int main()
{
    ll n;
    cin >> n;

    ll ans = 0;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        ans += v[i] - 1;
    }
    cout << ans;
}