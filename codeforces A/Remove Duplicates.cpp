
#include <iostream>
using namespace std;

int main()
{
	int n, j = 0,count=0;

	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == -1)
		{
			continue;
		}
		else {
			for (int j = n - 2; j >= 0; j--)
			{
				if (i == j)
				{
					continue;
				}
				else if (a[j] == a[i])
				{
					a[j] = -1;
					

				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == -1)
		{
			continue;
		}
		else
		{
			count++;
		}
	}
	cout<<count<<endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == -1)
		{
			continue;
		}
		else
		{
			cout << a[i] << " ";
		}
	}


}
