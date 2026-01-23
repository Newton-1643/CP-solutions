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

    if (n % 2 != 0 || n == 2)
    {
        cout << "-1\n";
    }    
    else
    {
        if (n % 6 == 0)
        {
            cout << n/6 << " " << n/4 << '\n';
        }
        else
        {
            cout << n/6 + 1 << " " << n/4 << '\n';
        }        
    }
    }
}