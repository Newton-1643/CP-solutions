#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;

    ll ans = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i != 0 && v[i] < v[i-1])
        {
            ans += v[i-1] - v[i];
            v[i] += v[i-1] - v[i];
        }
    }

    cout << ans;
}