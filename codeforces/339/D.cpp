#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define si set<int>
#define mset(arr, val) memset(arr, val, sizeof(arr))
#define f(i, n) for(int (i)=0;(i)<(n);(i)++)

const int MOD = 1e9+7;
const int mxN = 1<<17;
int st[1<<20];
int n;

void update(int pos, int val, int t, int i=1, int sl=0, int sr=(1<<n)-1){
    if(sl==sr){
        st[i] = val;
        return;
    }
    int md = (sl+sr)/2;
    if(pos<=md){
        update(pos, val, t-1, 2*i, sl, md);
    }else{
        update(pos, val, t-1, 2*i+1, md+1, sr);
    }
    // update st[i]
    if(t%2)
        st[i] = st[2*i]|st[2*i+1];
    else
        st[i] = st[2*i]^st[2*i+1];
}



int main() {
    int m;
    cin >> n >> m;
    ll arr[1<<n];
    f(i, 1<<n) {
        cin >> arr[i];
        update(i, arr[i], n);
    }
    while(m--){
        int a,b;
        cin >> a >> b;
        update(a-1, b, n);
        cout << st[1] << "\n";
    }

}