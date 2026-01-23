#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        
        map<int, int> occ;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            occ[a[i]]++;
        }

        if (occ.size() > 2)
        {
            cout << "No\n";
        }
        else if (occ.size() == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            if (abs(occ.begin()->second - occ.rbegin()->second) <= 1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }

    }
}