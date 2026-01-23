#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c, x, y, z;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        x = 0, y = 0, z= 0;
        cin >> a >> b >> c;
        
        if (b % 2 == c % 2)
        {
            x = 1;
        }
        if (c % 2 == a % 2)
        {
            y = 1;
        }
        if (a % 2 == b % 2)
        {
            z = 1;
        }

        cout << x << " " << y << " " << z << '\n';
    }

}