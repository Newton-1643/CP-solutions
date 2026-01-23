#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            vector<int> veven;
            vector<int> vodd;
            for (int i = n/2; i <= n; i--)
            {
                cout << i << " " <<  << " ";
            }
        }
    }
}



#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, h, l;
        cin >> n >> h >> l;

        ll ans = 0;
        ll cnt1 = 0;
        ll cnt2 = 0;

        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {            
            ll input;
            cin >> input;
                       
            if (input <= max(h, l)) v.push_back(input);
            if (input > min(h, l) && input <= max(h, l)) cnt1++;
            if (input <= min(h, l)) cnt2++;
        }

        if (cnt2 <= cnt1)
        {
            cout << cnt2 << '\n';
        }
        else if (cnt2 > cnt1)
        {
            cout << cnt1 + (cnt2-cnt1)/2 << '\n';
        }

        // ans = v.size()/2;
        // if (cnt <= ans)
        // {cout << ans << '\n';}
        // else 
        // {
        //     if ((cnt-ans) % 2 == 0)
        //     {cout << ans - (cnt - ans)/2 << '\n';}

        //     else if ((cnt-ans) % 2 != 0)
        //     {cout << ans - ((cnt - ans)/2) - 1 << '\n';}
        // }
    }
}