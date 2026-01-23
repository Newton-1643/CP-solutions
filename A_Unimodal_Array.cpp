#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int i = 0;
    while (i < n-1 && a[i+1] > a[i])
    {
        i++;
    }
    while (i < n-1 && a[i+1] == a[i])
    {
        i++;
    }
    while (i < n-1 && a[i+1] < a[i])
    {
        i++;
    }

    if (i == n-1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}