#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        ll size = n*k;
        vector<ll> a(size);
        for (ll i = 0; i < size; i++)
        {
            cin >> a[i];
        }

        // now if n is even, then we are going to add the last k integers at the distance of n/2+1 from the last of the array and if n is odd, we are simply going to add k integers at the distance of n/2+1... wait, oh shoot, I guess we don't really need to worry whether n is even or odd... let's try
        int cnt = 0;
        ll sum = 0;
        for (ll j = size-1-n/2; j >= 0 && cnt < k; j -= n/2 + 1)
        {
            sum += a[j];
            cnt++;
        }

        cout << sum << '\n';
    }
}