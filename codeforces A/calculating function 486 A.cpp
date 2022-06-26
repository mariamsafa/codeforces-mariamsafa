#include <iostream>
using namespace std;

int main()
{
    long long n, b;
    cin >> n;
    if (n % 2 == 0)
    {
        b = n / 2;
    }
    else
    {
        b = ((n + 1) / 2) * (-1);
    }
    cout<<b;
}
