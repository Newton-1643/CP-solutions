#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, j;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long a[n];
        long long maxi = 0;
        long long maxi2 = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            maxi = max(maxi, a[j]);
        }
        
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == maxi)
            {
                cnt++;
            }
            else
            {
                maxi2 = max(maxi2, a[j]);
            }
        }
        if (cnt > 1 || maxi - maxi2 == 1)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}