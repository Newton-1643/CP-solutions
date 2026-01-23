#include <bits/stdc++.h>
using namespace std;

bool between(int a, int b, int x)
{
    while (a != b)
    {
        a = a % 12 + 1;
        if (x == a)
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool c_between = between(a, b, c);
        bool d_between = between(a, b, d);

        if (c_between ^ d_between == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

}