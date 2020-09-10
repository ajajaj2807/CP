// For page 'p', solve 'p/4 + 4' problems. 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    int n;
    map<int, int> mp;
    cin >> n;
    int prev=3;
    while(n--){
        int pl;
        cin >> pl;
        if(pl==prev) {
            cout << "NO";
            return 0;
        }
        prev = 6-pl-prev;
    }
    cout << "YES";
}