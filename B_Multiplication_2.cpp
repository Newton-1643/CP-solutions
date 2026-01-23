#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;

    ll ans = 1;
    const ll initial = 1e18;
    vector<ll> v(n);  
    
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] == 0)
        {
            cout << 0;
            return 0;
        }
        else if (ans > initial/v[i])
        {
            flag = false;
        }
        else
        {
            ans *= v[i];
        }
    }

    if (flag)
    {
        cout << ans;
    }
    else
    {
        cout << "-1";
    }
    
}