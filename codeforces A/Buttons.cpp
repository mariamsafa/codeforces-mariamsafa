#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int r = c / 2, f = c - r;
		f += a;
		r += b;
		if (f > r)
		{
			cout << "First\n";
		}
		else
		{
			cout << "Second\n";
		}
	}

	return 0;
}


//TLE form
/* 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int a, b, c, t, i = 0, j = 1;
	int count = 0, count1 = 0;
	cin >> t;
 
	while (t--)
	{
		cin >> a >> b >> c;
		int f = a + b + c;
		// int sum=f;
		for (i = 0; i <= f; i += 2)
		{
			if (a == 0)
 
			{
				if (c > 1 || c == 1)
				{
					c = c - 1;
					a = a + 1;
				}
				else
				{
					count = 1;
					a = a + 1;
				}
			}
			a--;
			if (count == 0)
			{
				for (j = j; j <= f; j += 2)
				{
					if (b == 0)
					{
 
						if (c > 1 || c == 1)
						{
							c = c - 1;
							b++;
						}
						else
						{
							count1 = 1;
							break;
						}
					}
 
					b--;
					j = j + 2;
					break;
				}
			}
		}
		i = 0;
		j = 0;
		if (count == 0 && count1 == 1)
		{
			cout << "First" << endl;
		}
		else if (count == 1 && count1 == 0)
		{
			cout << "Second" << endl;
		}
		count=0;
		count1=0;
 
	}
}
*/
