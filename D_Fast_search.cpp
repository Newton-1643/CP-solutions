#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort (a, a+n);
    int k;
    cin >> k;
    
    ll l, r;
    for (int j = 0; j < k; j++)
    {
        cin >> l >> r;

        cout << (upper_bound(a, a+n, r) - lower_bound(a, a+n, l)) << " ";
    }
}