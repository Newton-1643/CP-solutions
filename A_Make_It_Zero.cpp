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

        bool answerpossible = false;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
            {
                answerpossible = true;
            }
        }

        if (!answerpossible)
        {
            cout << "0\n";
        }
        else
        {
            
        }
    }
}