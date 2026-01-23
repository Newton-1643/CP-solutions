#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int neg = 0;
        int pos = 0;        
        int ops = 0;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == -1)
            {
                neg++;
            }       
            else
            {
                pos++;
            }     
        }
        
        while (neg > pos)
        {
            neg--;
            pos++;            
            ops++;
        }

        if (neg % 2 != 0)
        {
            ops++;
        }

        cout << ops << '\n';
    }
}


 