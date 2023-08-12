#include <iostream>
using namespace std;

int main()
{
	int n;
	int k = 0, sum = 0, count = 0;

	cin >> n >> k;
	int count1 = k - count;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[0] == k && a[0]<=8)
		{
			sum = 1;
			break;
		}

		if (a[i] > 8)
		{
			if (count1 < 8)
			{
				count = count + count1;
				sum = sum + 1;
				break;
			}
			else
			{
				count = count + 8;
				count1 = count1 - 8;
				sum = sum + 1;
				if (count == k)
				{
					break;
				}
				a[i + 1] = a[i + 1] + a[i] - 8;
			}
		}

		else if (count1 != 0)
		{

			if (count1 < a[i])
			{
				count = count + count1;
				sum = sum + 1;
				break;
			}
			else
			{
				count = count + a[i];
				count1 = k - count;
				sum = sum + 1;
				if (count == k)
				{
					break;
				}
			}
		}
	}

	if (count == 0)
	{
		cout << sum;
	}

	else if (count < k)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << sum << endl;
	}

	return 0;
}
