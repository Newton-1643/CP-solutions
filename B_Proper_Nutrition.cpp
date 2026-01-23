#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int x = -1, y = -1;

    for (int i = 0; i * a <= n; i++)
    {
        int rem = n - i * a;
        if (rem % b == 0)
        {
            x = i;
            y = rem / b;
            break;
        }
    }

    if (x != -1)
    {
        cout << "YES\n";
        cout << x << " " << y;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
