#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i = 0, j = n-1;
        long long alice = v[i], bob = v[j], ans = 0;
        while (i < j)
        {
            if (alice < bob)
            {
                i++;
                alice += v[i];
            }
            else if (alice > bob)
            {
                j--;
                bob += v[j];
            }
            else
            {
                ans = (i+1) + (n-j); 
                i++;
                alice += v[i];
                j--;
                bob += v[j];
            }
        }
        cout << ans << '\n';
    }
}