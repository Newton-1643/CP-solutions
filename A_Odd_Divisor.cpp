#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool odddivisor(ll n)
{
    while (n > 1)
    {
        if (n % 2 != 0)
        {
            return true;
        }
        n /= 2;
    }
    return false;
}

int main()
{
    int t; 
    cin >> t; 

    ll n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (odddivisor(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}