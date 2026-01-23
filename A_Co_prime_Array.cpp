#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<ll> ans;
    int k = 0;

    ll given[n];
    for (int i = 0; i < n; i++)
    {
        cin >> given[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        ans.push_back(given[i]);
        
    if (__gcd(given[i], given[i+1]) != 1)
    {
        ans.push_back(1);
        k++;
    }
    }
    ans.push_back(given[n-1]);

    cout << k << '\n';
    for (int j = 0; j < ans.size(); j++)
    {
        cout << ans[j] << " ";
    }
}