#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        ll a[n];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
            if (a[i] < a[i-1] && i != 0)
            {
                flag = false;
            }
        }

        if (!flag && k < 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}