#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        int aa[n];
        int ab[m];
        for (int i = 0; i < n; ++i)
        {
            cin >> aa[i];
        }
        sort(aa, aa + n);
        for (int i = 0; i < m; ++i)
        {
            cin >> ab[i];
            if (!ans)
            {
                if (binary_search(aa, aa + n, ab[i]))
                {
                    cout << "YES\n";
                    cout << "1 " << ab[i] << "\n";
                    ans = 1;
                }
            }
        }
        if (!ans)
            cout << "NO\n";
    }
}