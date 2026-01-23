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
        ll k;

        cin >> n >> k;

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << "0\n";
        }

        else
        {
           sort(a, a + n);

            int best = 1;
            int curr = 1;

            for (int i = 1; i < n; i++)
            {
                if (a[i] - a[i-1] <= k)
                {
                    curr++;
                }
                else
                {
                    curr = 1;
                }
                best = max(best, curr);
            }

            cout << n - best << "\n";
        }
    }
}