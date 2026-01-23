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

        int ans = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];            
        
            int diff = abs(a[i] - (i+1));
            ans = __gcd(diff, ans);
            
        }       

        cout << ans << '\n';
    }
}