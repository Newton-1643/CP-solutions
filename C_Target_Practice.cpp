#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char c;
        int ans = 0;

        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> c;

                if (c == 'X')
                {
                   int a[4] = {i, j, 11-i, 11-j};
                   sort (a, a+4);

                   ans += a[0];
                }
            }            
        }

        cout << ans << endl;
    }
}