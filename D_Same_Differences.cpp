#include <bits/stdc++.h>
using namespace std;

#define ll long long

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
        
//         vector <int> v(n), diff(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];

//             diff[i] = v[i] - (i+1);
//         }

//         sort(diff.rbegin(), diff.rend());

//         ll cnt = 1;
//         ll ans = 0;
//         for (int i = 1; i < n; i++)
//         {
//             if (diff[i] == diff[i-1])
//             {
//                 cnt++;
//             }
//             else
//             {                
//                 ans += (cnt * (cnt - 1))/2;
//                 cnt = 1;                
//             }   
//         }
//         ans += (cnt * (cnt - 1))/2;

//         cout << ans << '\n';
//     }
// }

// Above code is without the use of maps, below code is with the use of maps
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector <ll> v(n);
        map <ll, ll> m;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];

            m[v[i] - i]++;
        }

        ll ans = 0;
        for (auto it : m)
        {
            ans += (it.second * (it.second - 1))/2;
        }
    
        cout << ans << '\n';    
    }
}