#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        cin >> n;

        if (n % 2 != 0)            
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i <= n; i += 2)
            {
                int rem = n - i;

                if (rem % 4 == 0)
                {
                    cnt++;
                }
            }
            cout << cnt << endl;            
        {

        }
        }        
    }
}