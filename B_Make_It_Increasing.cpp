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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        ll ans = 0;
        if (n == 1)
        {
            cout << "0\n";
        }
        else
        {            
            for (int j = n-2; j >= 0; j--)
            {
                if (a[j] >= a[j+1])
                {
                    while (a[j] >= a[j+1] && a[j] != 0)
                    {
                        a[j] /= 2;
                        ans++;
                    }
                if (a[j+1] == 0)
                {
                    flag = false;
                }
                }               
            }
            if (!flag)
            {
                cout << "-1\n";
            }
            else
            {
                cout << ans << '\n';
            }          
        }
    }
}