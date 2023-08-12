#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, p;
	cin >> n;
	int a = 0, b = 0, c = 0, d = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		if (k == 1)
		{
			a++;
		}
		else if (k == 2)
		{
			b++;
		}
		else if (k == 3)
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	count += d;
	if (c < a) // taking all the 3 children groups
	{
		count += c;
		a = a - c;
		c = 0;
	}
	else if (a <= c) // taking all the 1 children groups
	{
		count += a;
		c = c - a;
		a = 0;
	}
	if (c > 0)
	{
		count += c;
	}

	if (b > 0)
	{
		count += b / 2;
		b = b % 2;
	}

	p = a + (b * 2);
	if (p <= 4 && p > 0)
	{
		count+=1;
	}else if(p%4 !=0)
	{
		count+=(p/4)+1; 
	}
	else{
		count+= p/4;
	}
	cout<<count<<endl;

		return 0;
}
