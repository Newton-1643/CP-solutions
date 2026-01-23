#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>v;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    int cnt1 = 1;
    int cnt2 = 1;
    bool cnt = false;
    int diff = 0;

    for (int j = 1; j < 5; j++)
    {
        if (v[j] == v[j-1] && !cnt)
        {
            cnt1++;
            cnt = true;
        }
        else if (v[j] == v[j-1] && cnt)
        {
            cnt2++;            
        }
        else
        {
            cnt = true;
            diff++;
        }
    }

    if (max(cnt1, cnt2) == 3 && min(cnt1, cnt2) == 2 && diff == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}