#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    unordered_set <string> us;
    while (n--)
    {
        string s;
        cin >> s;        
        us.insert(s);
    }

    cout << us.size();
}