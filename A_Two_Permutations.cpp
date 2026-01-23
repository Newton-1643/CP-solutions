#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, b;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> a >> b;

        if ((a + b < n - 1) || a + b == 2*n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

    }
}