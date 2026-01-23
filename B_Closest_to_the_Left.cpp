#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;

    ll a[n];
    ll b[k];

    

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort (a, a+n);

    for (int j = 0; j < k; j++)
    {
        cin >> b[j];
        ll ans = 0;

        cout << upper_bound (a, a+n, b[j]) - a << endl; // We are subtracting a because upperbound function gives the pointer value(for eg. a+4, a+3, etc.), so to get the index of the answer, we subtract to get the index of the pointer        
    }    
}