#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n, temp,f,print=0;
        cin >> n;
        unordered_map<int,int>data;

        for(int i=0; i<n; i++)
        {
            cin>>temp;
            data[temp]++;
            if(data[temp]==3)

            {
                if(print==0)
                {

                    cout<<temp<<endl;
                    print++;
                }

            }

        }
         if(print==0)
    {
        cout<<-1<<endl;

    }

    }

   }
