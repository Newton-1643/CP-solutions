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
        
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (i < n-1 && a[i] == 1)
            {
                a[i] += 1;
            }
        }

        for (int j = 1; j < n; j++)
        {
            if (a[j] % a[j-1] == 0)
            {
                a[j] += 1;
            }
        }

        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }

        cout << '\n';
    }
}