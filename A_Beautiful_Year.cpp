#include <bits/stdc++.h>

using namespace std;

int main ()
{

    int y; // y=given year
    cin >> y;
    int a[4];
    
    for (int j = y + 1; j <= 9012; j++)
    {
        int t = j;
        for (int i = 3; i >= 0; i--)
        {
        a[i] = t % 10; 
        t /= 10;
        }
    
    if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[1] != a[2] && a[1] != a[3] && a[2] != a[3])
    {
        cout << j;
        break;
    }
    }
}