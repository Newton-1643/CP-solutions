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

        int cnt = 0;
        int ans = 0;

        string s;
        cin >> s;
        
        vector <char> v(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            v[i] = s[i];
            if (s[i] == '1')
            {
                flag = true;
            }
            
        }
        if (flag)
        {
        for (int i = 0; i < n; i++)
        {
            if (v[i] == '1')
            {
                ans++;
            }
        }
        bool dont = true;
        for (int i = 0; i < n; i++)
        { 
            if (v[0] == '0' && v[i] == '1' && dont == true)
            {
                ans += (cnt + 1) / 3;
                cnt = 0;
                dont = false;
            }                
            else if (v[i] == '0' && i != n-1)
            {
                cnt++;
            }
            else if (v[i] == '0' && i == n-1)
            {
                cnt++;
                ans += (cnt+1) / 3;
            }
            else 
            {                
                ans += cnt / 3;
                cnt = 0;
            }
        }

        cout << ans << '\n';
        }
        else
        {
            cout << (n+2)/3 << '\n';
        }
    }
}