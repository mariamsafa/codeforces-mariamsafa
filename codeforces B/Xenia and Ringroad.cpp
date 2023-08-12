#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int a = 1, b, sum = 0, i = 0;
	long long int n, m;
	cin >> n >> m;
	while (i < m)
	{
		cin >> b;
		if (b >= a)
		{
			sum += (b - a);
		}
		else
		{
			sum += ((n - a) + b);
		}
		a = b;
		i++;
	}
	cout << sum << endl;

	return 0;
}
