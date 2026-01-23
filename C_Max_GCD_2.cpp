#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = 1; i < b; i++)
    {
        if (b/i - (a-1)/i >= 2)
        {
            ans = i;
        }        
    }
    cout << ans;
}