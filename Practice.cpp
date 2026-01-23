#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num; 
	
	int n = 1;
	for(int i = 1; i <= num; i++)
	{
		vector<int> row;
		for(int j = 1; j <= i; j++)
		{
			row.push_back(n);
			n++;
		}

		if(i % 2 != 0)
		{
			reverse(row.begin(), row.end());
		}

		for(int k : row)
		{
			cout << k << " ";
		}
		cout << endl;
	}
    return 0;
}
	
