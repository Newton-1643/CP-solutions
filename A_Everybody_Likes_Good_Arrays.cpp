#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n; // t=total testcases, n=no. of array elements
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long int a[n]; // a[n]=array elements
        int p = 0, q = 0; // p=same parity no. in one go, q=no. of operations
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];

            if (j == 0)
            {
                p++;
            }
            else if (a[j] % 2 == a[j-1] % 2)
            {
                p++;
            }
            else 
            {
                q = q + p - 1;
                p = 1;
            }
        }
    q += p - 1;
    cout << q << endl;    
    }
}