#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;    
    
    if(k%60 >= 10)
    {
        cout << 21+(k/60) << ":" << k%60;
    }
    else
    {
        cout << 21+(k/60) << ":" << "0" << k%60;
    }
}