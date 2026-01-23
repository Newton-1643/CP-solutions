#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, y;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        string s[n];
        for ( int j = 0; j < n; j++)
        {
        cin >> s[j];
        }
    
    int ans = 0;
    if (n % 2 == 0)
    {
        x = n/2, y = n/2;
    }
    else
    {
        x = n/2, y = (n/2) + 1;
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int ones = 0;
            ones += s[i][j] - '0';
            ones += s[j][n-1-i] - '0';
            ones += s[n-1-j][i] - '0';
            ones += s[n-1-i][n-1-j] - '0';

            if (ones == 2)
            {
                ans += 2;
            }
            else if (ones == 1 || ones == 3)
            {
                ans += 1;
            }
        }
    }cout << ans << '\n';        
    }    
}