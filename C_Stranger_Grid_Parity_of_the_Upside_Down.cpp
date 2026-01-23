#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll mod = 1000000007;

ll mypow(ll base, ll exp) {
    ll ans = 1;
    while (exp > 0) {
        if (exp & 1) ans = (ans * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
    long long m;
    cin >> m;

    cout << mypow(2, ((m-1)*(m-1))) << endl;
    }
}