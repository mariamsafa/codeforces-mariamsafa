#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, vika = "vika";
        int n, m, count = 0;
        cin >> n >> m;
        char str[n][m];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        for (int i = 0; i < m; i++)
        {
            if (count == 4)
            {
                break;
            }
            for (int j = 0; j < n; j++)
            {
                if (str[j][i] == vika[count])
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
