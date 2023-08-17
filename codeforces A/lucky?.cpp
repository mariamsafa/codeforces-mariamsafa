#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string a;
    while (t--)
    {
        int l = 6;
        int sum = 0, sum1 = 0;
        cin >> a;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + a[i];
            sum1 = sum1 + a[l - 1];
            l--;
        }
        if (sum1 == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
