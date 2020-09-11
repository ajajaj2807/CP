#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
const int mxN = 2e5;

int main()
{
    int n;
    cin >> n;
    ll b[n];
    for(int i=0;i<n;++i){
        cin >> b[i];
    }
    if(n<=2){
        cout << 0;
        return 0;
    }
    int dv[3] = {-1,1,0};
    int i=0,j=0, fans=1e8;
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            ll bf = b[0]+dv[i];
            ll bs = b[1]+dv[j];
            ll cd = bs - bf;
            int ans=0;
            if(dv[i]) ans++;
            if(dv[j]) ans++;
            for(int k=2;k<n;++k){
                ll rv = bf + cd*k;
                if(abs(b[k]-rv)>1){
                    ans=1e8;
                    break;
                } else if(abs(b[k]-rv)==1){
                    ans += 1;
                }
            }
            fans = min(ans, fans);
        }
    }
    if(fans!=1e8){
        cout << fans;
        return 0;
    }
    cout << -1;
    
}


