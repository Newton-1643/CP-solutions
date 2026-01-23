#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n; 
    cin >> n;
    int easy = 2*n;

    int a[easy];
    for (int i = 0; i < easy; i++)
    {
        cin >> a[i];
    }

    sort (a, a+easy);
    
    ll sum1 = 0;
    for (int j = 0; j < n; j++)
    {
        sum1 += a[j];
    }

    ll sum2 = 0;
    for (int k = n; k < easy; k++)
    {
        sum2 += a[k];
    }

    if (sum1 != sum2)
    {
        for (int i = 0; i < easy; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }

}