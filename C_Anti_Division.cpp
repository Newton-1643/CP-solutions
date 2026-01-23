#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll divac = (a-1)/c;
    ll divad = (a-1)/d;
    ll divbc = b/c;
    ll divbd = b/d;
    ll lcm = (c*d)/(__gcd(c, d));
    ll commona = (a-1)/lcm;
    ll commonb = b/lcm;

    cout << (b-a+1) - (abs(divac - divbc) + abs(divad - divbd) - abs(commona - commonb));
}