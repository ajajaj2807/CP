#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mset(arr, val) memset(arr, val, sizeof(arr))

const int MOD = 1e9+7;
const int N = 300 * 1000 + 9;
int n, m;
int a[N], b[N];
 
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) scanf("%d", a + i);
    scanf("%d", &m);
    for(int i = 0; i < m; ++i) scanf("%d", b + i);
    
    ll sums=0;
    for(int i=0;i<n;++i) sums += a[i];
    for(int i=0;i<m;++i) sums -= b[i];
    if(sums!=0){
        cout << -1;
        return 0;
    }

    int i = 0, j=0;
    int res=0;
    while(i<n){
        res++;
        ll sa=a[i++], sb=b[j++];
        while(sa!=sb){
            if(sa>sb){
                sb+=b[j++];
            }else{
                sa+=a[i++];
            }
        }
    }
    cout << res;
    return 0;
}
