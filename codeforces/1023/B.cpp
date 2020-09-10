// For page 'p', solve 'p/4 + 4' problems.

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    ll l, r, ans;
    cin >> l >> r;
    ll si, se;
    if (r % 2==0)
    {
        si = r / 2 - 1;
        se = r / 2 + 1;
    }
    else
    {
        si = r / 2;
        se = r / 2 + 1;
    }
    ans = min(l - se, si - 1);
    if (ans < 0)
        cout << 0;
    else
        cout << ans + 1;
}