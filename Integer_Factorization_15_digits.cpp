#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n = -1;   

    while(n != 0)
    {
        cin >> n;
        map<ll, ll> mp;

        if (n == 0)
        {
            break;
        }
        
        while (n % 2 == 0)
        {
            n /= 2;
            mp[2]++;
        }

        for (ll i = 3; i * i <= n; i += 2)
        {
            while (n % i == 0)
            {
                n /= i;
                mp[i]++;
            }
        }

        if (n > 2)
        {
            mp[n]++;
        }

        for (auto it : mp)
        {
            cout << it.first << "^" << it.second << " ";
        }

        cout << '\n';
    }
}