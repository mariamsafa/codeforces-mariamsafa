#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    int a[3];
    cin >> t;
    int maxx = 0, minn = 0;
    while (t--)
    {
      int n;
      cin>>n;
      string a;
      cin>>a;
      sort(a.begin(),a.end());
      int s=a[n-1]-'a';
      cout<<s+1<<endl;
     /*  char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      for(int i=0;i<26;i++)
      {
        if(arr[i]==s)
        {
            cout<<i+1<<endl;
            break;
        }

      } */
    }
}
