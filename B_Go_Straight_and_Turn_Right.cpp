#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string t;
    cin >> t;

    vector<char> v;
    for (char i : t)
    {
        v.push_back(i);
    }

    int x = 0;
    int y = 0;

    string dir = "right";

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == 'S')
        {
            if(dir == "right")
            {
                x++;
            }
            else if (dir == "down")
            {
                y--;
            }
            else if (dir == "left")
            {
                x--;
            }
            else if (dir == "up")
            {
                y++;
            }
        }
        else if (v[i] == 'R')
        {
            if (dir == "right")
            {
                dir = "down";
            }
            else if (dir == "down")
            {
                dir = "left";
            }
            else if (dir == "left")
            {
                dir = "up";
            }
            else if (dir == "up")
            {
                dir = "right";
            }
        }        
    }
    cout << x << " " << y;

}