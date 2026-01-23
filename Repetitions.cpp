#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 1;
    int ans = 0;

    if (s.size() == 1)
    {
        cout << 1;
    }
    else
    {
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i-1])
        {
            cnt++;
        }
        else
        {            
            cnt = 1;
        }

        ans = max(ans, cnt);
    }

    cout << ans;
    }
}