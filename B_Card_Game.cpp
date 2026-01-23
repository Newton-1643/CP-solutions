#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];

        int ans = 0;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                int a1 = a[i], a2 = a[1-i];
                int b1 = b[j], b2 = b[1-j];

                int l = 0, r = 0;
                
                if (a1 > b1)
                {
                    l++;
                }
                else if (a1 < b1)
                {
                    r++;
                }

                if (a2 > b2)
                {
                    l++;
                }
                else if (a2 < b2)
                {
                    r++;
                }

                if (l > r)
                {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }    
}