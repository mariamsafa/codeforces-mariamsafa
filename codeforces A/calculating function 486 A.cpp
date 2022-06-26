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
// note :

// f(4) =  - 1 + 2 - 3 + 4 = 2

// f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
