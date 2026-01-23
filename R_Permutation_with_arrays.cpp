#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    static int freq[10000001];

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        freq[b[i]]--;
        if (freq[b[i]] < 0)
        {
            flag = false;            
        }
    }

    if (flag == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
