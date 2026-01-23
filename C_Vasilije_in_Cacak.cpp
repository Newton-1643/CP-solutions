#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        ll x;

        cin >> n >> k >> x;

        ll minsum = (k * (k + 1))/2;
        ll maxsum = (n * (n + 1))/2 - ((n - k) * (n - k + 1))/2;

        if (x >= minsum && x <= maxsum)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}