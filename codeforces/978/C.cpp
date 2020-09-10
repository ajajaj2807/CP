// For page 'p', solve 'p/4 + 4' problems. 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    int n, m, idx=1;
    cin >> n >> m;
    ll r[n], l[m], s=0;
    
    for(int i=0;i<n;++i){
        cin >> r[i];
    }

    while(m--){
        ll x;
        cin >> x;
        while(x > s+r[idx-1]){
            s+=r[idx-1];
            idx += 1;
        }
        cout << idx << " " << x-s << "\n";

    }


}