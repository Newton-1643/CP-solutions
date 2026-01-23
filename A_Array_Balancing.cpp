#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    long long ans;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        ans = 0;
        long long a[n], b[n];
        
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
            
        for (int j = 0; j < n-1; j++)
            {
            ans += (abs(max(a[j], b[j]) - max(a[j+1], b[j+1])) + abs(min(a[j], b[j]) - min(a[j+1], b[j+1])));
            }

        cout << ans << endl;
        }        
    }
