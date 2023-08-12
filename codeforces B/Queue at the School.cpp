#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	string a;
	char temp;
	cin >> a;
	int l = a.length();
	while (t--)
	{
		for (int i = 0; i < l; i++)
		{
			if (a[i] == 'B' && a[i + 1] == 'G')
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				i++;
			}
		}
	}
	cout << a << endl;

	return 0;
}
