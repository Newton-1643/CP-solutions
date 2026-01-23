#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (auto c : s)
    {
        int ascii_val = c - 'A';

        if (ascii_val == 0 || ascii_val == 14 || ascii_val == 24 || ascii_val == 4 || ascii_val == 20 || ascii_val == 8 || ascii_val == 32 || ascii_val == 46 || ascii_val ==  56 || ascii_val == 36 || ascii_val == 52 || ascii_val == 40)
        {}
        else
        {
            cout << ".";
            if (ascii_val < 26)
            {
                ascii_val += 32;
                char ch = 65 + ascii_val;
                cout << ch;
            }
            else
            {
                cout << c;
            }
        }
    }
}


