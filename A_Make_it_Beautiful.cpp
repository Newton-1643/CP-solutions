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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }        

        sort (a, a+n, greater<>());        

        if (a[0] == a[n-1])
        {
            cout << "NO\n";
        }
        else
        {
            swap(a[1], a[n-1]);

            cout << "YES\n";

            for (int x : a)
            {
                cout << x << " ";
            }

            cout << '\n';
        }
    }
}