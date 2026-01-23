#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int cnt = 0;

        int m = l;
        int k = 0;
        while (m > 0)
        {
            m /= 3;
            cnt++;
            k++;
        }
        cnt += k;
        for (int i = l+1; i <= r; i++)
        {
            int j = i;
            
            while (j > 0)
            {                
                j /= 3;
                cnt++;
            }
            
        }
        cout << cnt << '\n';
    }
}