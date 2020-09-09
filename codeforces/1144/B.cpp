#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    int n, ch = 0;
    cin >> n;
    vector<int> even, odd;
    int arr[n];
    for (int i = 0, inp; i < n; ++i)
    {
        cin >> inp;
        if (inp % 2)
        {
            ch++;
            odd.push_back(inp);
        }
        else
        {
            ch--;
            even.push_back(inp);
        }
    }
    if (abs(ch) <= 1)
    {
        cout << 0;
        return 0;
    }
    else
    {
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        if (ch > 0)
        {
            auto it = odd.end();
            --it;
            it -= even.size() + 1;
            ll sum=0;
            for (; it != odd.begin(); --it)
            {
                sum += *it;
            }
            sum += *it;
            cout << sum;
        }
        else
        {
            auto it = even.end();
            --it;
            it -= odd.size() + 1;
            ll sum=0;
            for (; it != even.begin(); --it)
            {
                sum += *it;
            }
            sum += *it;
            cout << sum;
        }
    }
}