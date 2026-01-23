#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g, c, l;
    cin >> g >> c >> l;

    if (max(max(g, c), l) - (min(min(g, c), l)) >= 10)
    {
        cout << "check again";
    }
    else if ((g >= c && g <= l) || (g >= l && g <= c))
    {
        cout << "final " << g;
    }
    else if ((c >= g && c <= l) || (c >= l && c <= g))
    {
        cout << "final " << c;
    }
    else
    {
        cout << "final " << l;
    }
    return 0;
}