#include <bits/stdc++.h>
using namespace std;

int main()
{

	string a, b;
	cin >> a;
	int l = a.length();
	transform(a.begin(), a.end(), a.begin(), ::tolower);

	for (int i = 0; i < l; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'y')
		{
			continue;
		}
		else
		{
			b = b + '.';
			b = b + a[i];
		}
	}
	
	cout << b<<endl;

	return 0;
}
