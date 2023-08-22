#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> mapp;
    int n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (mapp[a] == 0)
        {
            cout << "OK" << endl;
            mapp[a] = 1;
        }
        else
        {
            cout << a << mapp[a] << endl;
            mapp[a]++;
        }
    }

    return 0;
}
