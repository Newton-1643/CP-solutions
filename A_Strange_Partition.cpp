#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll roundoff(ll number, ll x)
{
    if (number % x == 0)
    {return number/x;}
    else
    {return number/x + 1;}
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        ll sum = 0;
        ll roundedsum = 0;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            roundedsum += roundoff(a[i], x);
        }

        cout << roundoff(sum, x) << " " << roundedsum << '\n';
    }
}