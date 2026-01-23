#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        
        // for (ll i = n/2; i > 0; i--)
        // {
        //     if ((n - i) % i == 0)
        //     {
        //         cout << i << " " << n-i << '\n';
        //         break;
        //     }
        // }
        // this code worked but it ended up in a tle, kinda sad but expected that

        ll ans = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = n/i;
                break;
            }
        }        
        cout << ans << " " << n - ans << '\n';      
        
        // I am gonna be honest, this solution gives AC, but I didn't understand this solution, I just don't get how we are sure that we will be getting numbers with least lcm
    }
}
