#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll i = n;
    int cnt = 0;
    while (i/10 > 0)
    {
        i /= 10;
        cnt++;
    }

    int power = 1;
    while (cnt--)
    {
        power *= 10;
    }
    cout << ((i+1)*(power)) - n;
}