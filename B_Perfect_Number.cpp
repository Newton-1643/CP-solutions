#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k;
    cin >> k;

    ll i, j, l;
    int cnt = 0;
    for (i = 19; cnt < k; i++)
    {
        j = i;
        l = 0;
        while (j > 0)
        {            
            l += j % 10;
            j /= 10;
        }
        if (l == 10)
        {
            cnt++;
        }
    }

    cout << i-1;
}