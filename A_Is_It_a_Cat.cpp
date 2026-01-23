#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    string s;

    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cin >> s;
        string ans = "";

        for (int j = 0; j < n; j++)
        {
            s[j] = tolower (s[j]);
        }
            
        for (int j = 0; j < n; j++)
        {
            if (j == (n-1) || s[j] != s[j+1])
            {
                ans = ans + s[j];
            }
        }
        
     if (ans == "meow")
     {
        cout << "YES" << endl;
     }
     else
     {
        cout << "NO" << endl;
     }

    }
    return 0;
}