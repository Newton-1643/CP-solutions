#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long int a[n];
        long long int pos = 0;
        long long int rem_neg = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if (a[j] >= 0)
            {
                pos += a[j];
            }
            else 
            {
                if (pos >= abs(a[j]))
                {
                    pos -= abs(a[j]);
                }
                else
                {
                    rem_neg += (abs(a[j]) - pos);
                    pos = 0;
                }
            }
        }
        cout << rem_neg << endl;
    }
}