#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t, n, ei, oi, ee, oe, nm; // t=no. of test cases, n=length of array a, ei=even indices, oi=odd indices, ee=even elements, oe=odd elements, nm= no. of mismatches
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        ei = 0, oi = 0, ee = 0, oe = 0, nm = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];

            if (j % 2 != 0)
            {
                oi++;
                if (a[j] % 2 != 0)
                {
                    oe++;
                }
                else 
                { 
                    ee++;
                    nm++;
                }
            }
            else 
            {
                ei++;
                if (a[j] % 2 == 0)
                {
                    ee++;
                }
                else 
                {
                    oe++;
                    nm++;
                }
            }
        }
        if (oi != oe || ei != ee)
        {
            cout << "-1" << endl;
        }
        else 
        {
            cout << nm / 2 << endl;
        }
    }
        
}
        






