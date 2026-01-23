#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector <char> v;

    for (char i : s)
    {
        v.push_back(i);
    }
    sort(v.begin(), v.end());

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j];
    }
}