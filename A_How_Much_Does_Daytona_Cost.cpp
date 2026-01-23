#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k; // n = no. of array elements, k = element in concern

        bool flag = false;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == k)
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}