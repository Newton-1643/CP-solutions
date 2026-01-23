#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;       
        
        int ans = 0;
        for (int length = 1; length <= min(a.length(), b.length()); length++)
        {
            for (int i = 0; i + length <= a.length(); i++)
            {
                for (int j = 0; j + length <= b.length(); j++)
                {
                    if (a.substr(i, length) == b.substr(j, length))
                    {
                        ans = max(ans, length);
                    }                    
                }
            }
        }

        cout << (a.length() + b.length()) - (2 * ans) << '\n';
    }
}