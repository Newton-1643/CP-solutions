#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = j + 0;
        }
        else
        {
            j = 1;
        }
    }
    
    if (j == 0)
    {
        cout << "EASY";
    }
    else 
    cout << "HARD";

}
