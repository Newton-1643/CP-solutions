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

        int a[n];
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                cnt++;
            }
        }
        
        int index = 0;
        
        if (cnt == 0)
        {
            cout << 1 << '\n';
        }
        else if (cnt % 2 != 0)
        {
            cout << "-1\n";
        }
        else 
        {
            int cur = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    cur++;
                }
                if (cur == cnt/2)
                {
                    cout << i+1 << '\n';
                    break;
                }
            }
            
        }
    }
}