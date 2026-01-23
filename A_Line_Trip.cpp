#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int diff = INT_MAX;
        int ans = a[0];
        for (int j = 0; j+1 < n; j++)
        {
            diff = a[j+1] - a[j];
            ans = max(ans, diff);
        }

        int final = max(ans, (2*(x-a[n-1])));

        cout << final << endl;
    }
}