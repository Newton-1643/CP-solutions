#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long int a[n];
        long long int ans = 0;
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
                cin >> a[j];
                if (j == n-1)
                {
                    break;
                }
                else if (a[j] == 0 && flag == true)
                {
                    ans++;
                }
                else if (a[j] != 0)
                {
                    ans += a[j];
                    flag = true;
                }
        }
        cout << ans << '\n';
    }
}