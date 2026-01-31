#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int x = n/2 + 1;

        for (int i = 1; i <= n; i++)
        {
            cout << x << " ";
            
            if (i % 2 != 0)
            {
                x -= i;
            }
            else
            {
                x += i;
            }
        }
        cout << '\n';
    }
}