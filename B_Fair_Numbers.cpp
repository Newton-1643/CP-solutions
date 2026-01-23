#include <bits/stdc++.h>
using namespace std;

#define ll long long 

bool isfair(ll n)
{
    ll temp = n;
    while (temp > 0)
    {
        ll d = temp%10;
        if (d != 0 && n%d != 0)
        {
            return false;
        }
        temp /= 10;
    } 
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        while (!isfair(n))
        {
            n++;
        }

        cout << n << '\n';        
    }
}