#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if (k == 1)
        {
            cout << "NO\n";
        }
        else if (k != 1 && x != 1)
        {
            cout << "YES\n";
            cout << n << '\n';
            for (int i = 0; i < n; i++)
            {
                cout << "1 ";
            }
            cout << endl;
        }
        else if (k == 2 && x == 1)
        {
            if (n % 2 == 0)
            {
                cout << "YES\n";
                cout << n/2 << '\n';
                for (int i = 0; i < n/2; i++)
                {
                    cout << "2 ";
                }                
            }
            else 
            {
                cout << "NO";
            }
            cout << endl;
        }
        else if (k > 2 && x == 1)
        {
            if (n % 2 != 0)
            {
                cout << "YES\n";
                cout << n/2 << endl;
                for (int i = 0; i < n/2-1; i++)
                {
                    cout << "2 ";
                }
                cout << "3";
            }
            else
            {
                cout << "YES\n";
                cout << n/2 << endl;
                for (int i = 0; i < n/2; i++)
                {
                    cout << "2 ";
                }
            }
            cout << endl;
        }
    }
}