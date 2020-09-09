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
        ll a, b, c, ans = 0;
        cin >> a >> b >> c;
        ans = (a+b+c)/2;
        cout << ans << "\n";
    }
}