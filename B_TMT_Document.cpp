#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        string s;
        cin >> s;

        vector<int> T, M;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'T')
            {
                T.push_back(j);
            }
            else
            {
                M.push_back(j);
            }           
        }

        bool ans = true;

        if (T.size() != 2 * M.size())
        {
            ans = false;
        }
        else 
        {
            int x = M.size();

            for (int k = 0; k < x; k++)
            {
                if (! (T[k] < M[k] && M[k] < T[k + x]))
                {
                    ans = false;
                }
            }
        }
        if (ans)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }    
}