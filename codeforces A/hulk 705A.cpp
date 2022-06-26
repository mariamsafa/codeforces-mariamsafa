#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i%2==1)
        {
            cout<<" I hate";
        }
        else{
            cout<<" I love";
        }
        if(i!=a)
        {
            cout<<" that";
        }
    }
    cout<<" it";
    return 0;
}



































// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string a = "i hate";
//     string b = "that";
//     string c = "i love ";
//     string m = "it";
//     int n;
//     cin >> n;
//     if (n == 1)
//         {
//         cout << "I hate it";
//     }
//     else
//     {
//         while (n--)
//         {
//             if (n >= 1)
//             {
//                 cout << a;
//             }
//         }
//     }

//     return 0;
// }