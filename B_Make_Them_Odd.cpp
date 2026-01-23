#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<ll> s;
        for(int i = 0; i < n; i++)
        {
            ll element;
            cin >> element;
            s.insert(element);
        }

        ll ans = 0; 

        while (s.size() != 0)
        {
            ll temp = *s.rbegin();

            s.erase(temp);
            if(temp % 2 == 0)
            {
                ans++;
                s.insert(temp/2);
            }
        }

        cout << ans << '\n';
    }
}