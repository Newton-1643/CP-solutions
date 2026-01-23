#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        ll round = max(x, y);
        ll edge = (round*round) - (round-1);

        if (round % 2 == 0)
        {
            if (x > y)
            {
                cout << edge+(abs(x-y)) << '\n'; 
            } 
            else
            {
                cout << edge-(abs(x-y)) << '\n';
            }
        }
        else
        {
            if (x < y)
            {
                cout << edge+(abs(x-y)) << '\n';
            }
            else
            {
                cout << edge-(abs(x-y)) << '\n';
            }
        }
    }
}