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
        }

        // what we know is that for a sorting with adjacent swaps, max no. of swaps needed for an array of size n is n(n-1)/2 and this happens only when the array is strictly decreasing so the answer will be no only when the given array is strictly decreasing
        
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i-1])
            {
                flag = true;
            }
        }

        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}