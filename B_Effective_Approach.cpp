#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n; 
    cin >> n;

    ll a[n+1];
    ll hey[n+1];
    ll yeah[n+1];
    ll cnt = 0;
    ll cnt2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        hey[a[i]] = i;
        yeah[a[i]] = n + 1 - i; 
    }

    ll m;
    cin >> m;

    ll b[m+1];
    for (int j = 1; j <= m; j++)
    {
        cin >> b[j];
        
        cnt += hey[b[j]];
        cnt2 += yeah[b[j]];
    }

    cout << cnt << " " << cnt2;
}