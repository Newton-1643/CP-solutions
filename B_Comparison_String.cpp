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

        string s;
        cin >> s;

        int currgreater = 0, maxgreater = 0;
        int currlesser = 0, maxlesser = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            if (c == '>')
            {
                currgreater++;
                currlesser = 0;
            }
            else
            {
                currlesser++;
                currgreater = 0;
            }

            maxlesser = max(currlesser, maxlesser);
            maxgreater = max(currgreater, maxgreater);                        
        }
        cout << max(maxlesser, maxgreater) + 1 << '\n';

    }
}