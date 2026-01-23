#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n;        

        cin >> a >> b >> n;     
        
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];         
        }

        sort (arr.rbegin(), arr.rend());

        ll cur = b; 
        ll ans = 0;

        for (ll j = 0; j < n && cur > 0; j++)
        {
            ans += cur - 1;
            cur = 1;
            
            cur = min(cur + arr[j], a);
        }

        if (cur > 0)
        {
            ans += cur;
        }

        cout << ans << '\n';       
    }
}