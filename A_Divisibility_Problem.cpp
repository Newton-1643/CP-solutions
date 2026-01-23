#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    int t; 
    cin >> t;

    while (t--)
    {
    ll a, b;
    cin >> a >> b;

    if (a%b == 0)
    {
        cout << 0 << '\n';
    }
    else
    {
        ll req = a/b + 1;

        ll ans = (b * req) - a;
        
        cout << ans << '\n';
    }
}

}