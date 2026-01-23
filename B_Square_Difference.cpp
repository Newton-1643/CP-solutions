#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ans(ll area)
{
    for (ll i = 2; i * i <= area; i++)
    {
        if (area % i == 0)
        {
            return false;
        }
    }
    return true; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        ll a, b;
        cin >> a >> b;

        ll area = a * a - b * b;
        
        if (a-b != 1)
        {
            cout << "NO" << '\n';
        }
        else if (ans(area))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}