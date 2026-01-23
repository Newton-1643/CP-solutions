#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;
        bool inSegment = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                if (!inSegment)
                {
                    ans++;
                    inSegment = true;
                }
            }
            else
            {
                inSegment = false;
            }
        }

        if (ans == 0)
        {
            cout << "0\n";
        }
        else if (ans == 1)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
}
