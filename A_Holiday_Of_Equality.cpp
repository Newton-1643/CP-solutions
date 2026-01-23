#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int maxi = 0;
    for (int i = 0; i < n; i++)
    { 
        cin >> a[i];

        maxi = max(maxi, a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += maxi - a[i];
    }
    cout << ans;
}