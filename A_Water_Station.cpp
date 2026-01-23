#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (5-n%5 > n%5)
    {
        cout << n - n%5;
    }
    else
    {
        cout << n + (5-n%5);
    }
}