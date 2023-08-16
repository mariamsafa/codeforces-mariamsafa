#include<iostream>
using namespace std;
int main()
{
    int t,n,m=0,b=0;
    cin>>t;
    int a[100];
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                m+=a[i];
            }
            else{
                b+=a[i];
            }
        }    
        if(m>b)
        {
            cout<<"YES"<<endl;
        }    
        else{
            cout<<"NO"<<endl;
        }
      m=0;
      b=0;
    }
}
