#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;    

    if (abs(b - c) > 1) 
    {
        cout << "No";
    } 
    else 
    {
        if (b == 0 && c == 0)
        {
            if (a == 0 || d == 0)
            {
                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
        }
        else
        {
            cout << "Yes";
        }
    }
}
