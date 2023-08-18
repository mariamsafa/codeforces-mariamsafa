#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    int a[3];
    cin >> t;
    int maxx = 0, minn = 0;
    while (t--)
    {
        for (int i = 0; i <= 2; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < 3; i++)
        {
            if (a[i] > maxx)
                maxx = a[i];
        }
    
        minn=*min_element(a, a + 3);
        
        for (int i = 0; i < 3; i++)
        {
            if (a[i] == minn || a[i] == maxx)
            {
                continue;
            }
            else
            {
                cout << a[i] << endl;
            }
        } 
        maxx=0;
        minn=0;
    }
}
