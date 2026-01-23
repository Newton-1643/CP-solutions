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

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll diff;
        ll ans = LLONG_MAX;
        bool flag = false;
        for (int j = 1; j <= n-1; j++)
        {
            diff = a[j] - a[j-1];
            ans = min(ans, diff);
            if (a[j] < a[j-1])
            {
                flag = true;
            }
        }
        
        if (flag)
        {
            cout << "0\n";
        }
        else
        {
            cout << ans/2 + 1<< '\n';
        }
    }
}