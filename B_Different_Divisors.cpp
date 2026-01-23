#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    vector<ll>primes;
    
    for (int i = 2; i <= 100000; i++)
    {
        bool isprime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }

        if (isprime)
        {
            primes.push_back(i);            
        }
    }

    while (t--)
    {
        int d;
        cin >> d;

        ll p = *lower_bound(primes.begin(), primes.end(), d+1);
        ll q = *lower_bound(primes.begin(), primes.end(), p+d);

        ll ans = min(p*p*p, p*q);
        cout << ans << '\n';
    }
}