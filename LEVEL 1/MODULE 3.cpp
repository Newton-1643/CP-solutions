#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    Range of Datatypes
    int a = INT_MAX;
    int b = INT_MIN;
    int c = INT_MAX + 1;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    */

    /*
    Set precision
    double d = 1524.289722265;
    cout << d << endl;
    cout << fixed << setprecision(6) << d << endl;
    cout << fixed << setprecision(11) << d << endl;
    cout << 1e2 << endl;
    cout << 1e-2 << endl;
    */

    /*Functions
    int helper (int x, int y) {
        return (x*y) + (2*x) + y + 40 + (x*x);
    }
    int main () {
        // int val1 = helper (2, 3);
        int val1 = helper (4, 5);

        cout << val1;
    }

    string helper(int a[], int y, string s){
    int a =(x*y)+(2*x)+y+40+(x*x);
    cout << a << endl;
    string s = "tle";
    return s;
    }
    int main(){
        int val1 = helper(a, 3, 2);
        int val1 = helper(4,5);
        }
        */

    /*
    Header Files
    We usually use #include<bit/stdc++.h> because it includes every standard library and and STL headers.
    */

    /*
    Namespace
    namespace abc{
        int a = 5;
    }
    namespace xyz{
        int a = 10;    
    }

    using namespace abc;
    using namespace xyz;

    int main(){
    cout << a;
    }
    It will show error as we didn't specify which namespace to use to cout a.
    */

    /*
    Fast I/O
    ios::sync_with_stdio(false);  --> it removes sync between C++ and C commands. eg.-cout and printf
    cin.tie(NULL);  --> it removes sync between cin and cout
    \n is faster than endl as endl inserts a new line and flushes the stream(output buffer) whereas \n just inserts a new line
    */
    return 0;
}