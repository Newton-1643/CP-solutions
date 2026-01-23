#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if ((a+b+c) % 2 == 0 && (a+c) <= (b+c))
        {
            cout << "Second\n";           
        }
        else if ((a+b+c) % 2 == 0 && (a+c) > (b+c))
        {
            cout << "First\n";
        }
        else if ((a+b+c) % 2 != 0 && (a+c) >= (b+c))
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }    
}