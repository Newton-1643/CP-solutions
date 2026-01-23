#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b;  
    b.push_back(a[0]);
    for (int j = 1; j < n; j++)
    {
        if(abs(a[j] - a[j-1]) == 1)
        {
            b.push_back(a[j]);
        }
        else if (a[j] - a[j-1] > 1)
        {
            int req = a[j-1] + 1;
            while(a[j] - req >= 1)
            {
                b.push_back(req);
                req++;
            }
            b.push_back(a[j]);
        }
        else
        {
            int req = a[j-1] - 1;
            while (req - a[j] >= 1)
            {
                b.push_back(req);
                req--;
            }
            b.push_back(a[j]);
        }        
    }

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}