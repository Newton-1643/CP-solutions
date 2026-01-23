#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t; 
    cin >> t;

    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        
        ll lcm = (x*y)/(__gcd(x, y));
        ll nofxy = n/lcm;

        ll onlyx = n/x - nofxy;
        ll onlyy = n/y - nofxy;

        ll ans = (((n)*(n+1)-((n-onlyx)*(n-onlyx+1)))-((onlyy)*(onlyy+1)))/2;

        cout << ans << '\n';
    }
}