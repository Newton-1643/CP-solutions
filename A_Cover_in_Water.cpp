#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, ans;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        bool flag = true;

        for (int j = 0; j < n; j++)
        {                       
            if (s[j] == '.' && s[j] == s[j+1] && s[j] == s[j-1])
            {
                cout << 2 << '\n';
                flag = false;
                break;
            }
            else if ((s[j] == '.' && s[j] != s[j+1]) || (s[j] == '.' && s[j] != s[j-1]))
            {
                ans++;
            }
                        
        }
        if (flag == true)
        {
            cout << ans << '\n';
        }    
    }
}