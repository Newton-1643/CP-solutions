#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k; //t = no. of test cases, n = no. of members, k = no. of discussions
    cin >> t;
    
    for (int i = 0; i < t; i++) // loop for all the testcases
    {
        cin >> n >> k;
        
        int j;
        string s[n];
        cin >> s[0];
        int ans = 1;
        for (j = 1; j < n; j++) // loop for all the members
        {
            cin >> s[j];    
            if (s[j] == s[0])
            {
                ans++;
            }     
        }
        cout << ans << endl;
    }    
}