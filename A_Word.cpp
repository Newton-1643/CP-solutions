#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int uppercase = 0, lowercase = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowercase++;
        }
        else 
        {
            uppercase++;
        }
    }
    if (uppercase > lowercase)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper (s[i]);
            
        }
        cout << s;
    }
    else 
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower (s[i]);
            
        }
        cout << s;
    }
    return 0;
}