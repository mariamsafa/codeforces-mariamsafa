#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, d, temp = 0, count = 0, sum = 0;
	cin >> n;
	while (n--)
	{
		cin >> d;
		if (d >= temp)
		{
			count++;
		}
		else if (d < temp)
		{
			count = 1;
		}
		if (count > sum)
		{
			sum = count;
		}
		temp = d;
	}
	cout << sum;

	return 0;
}
