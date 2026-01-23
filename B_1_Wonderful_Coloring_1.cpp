#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<int> v(26, 0);
        for(char i : s)
        {
            v[i-'a']++;    
        }

        int cnt1 = 0;
        int cnt2 = 0;
        for (int j = 0; j < 26; j++)
        {
            if (v[j] == 1)
            {
                cnt1++;
            }
            else if (v[j] != 1 && v[j] != 0)
            {
                cnt2++;
            }
        }

        cout << cnt1/2 + cnt2 << endl;
    }
}