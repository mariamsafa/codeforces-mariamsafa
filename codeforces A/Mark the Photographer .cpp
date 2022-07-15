#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int count=0;
 int t,n,x;
 cin>>t;
 while(t--)
 {
	cin>>n>>x;
	n=2*n;

	int h[n];
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	sort(h,h+n,greater<int>());
	for(int i=0;i<n/2;i++)
	{
			if(h[i]-h[((n/2)+i)]>=x)
			{
				count++;
			}
		
	}
	if (count==n/2)
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	count=0;
 }
return 0;
}