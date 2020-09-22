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
const int mxN = 1e7;

int arr[mxN+1] = {0};
ll pre[mxN+1] = {0};
bool isNotPrime[mxN+1] = {0};

void createSieve(int n){
    for(int i = 2;i<=n;++i){
        if(isNotPrime[i]) continue;
        for(int j=i;j<=n;j+=i){
            pre[i] += arr[j];
            isNotPrime[j] = true;
        }
    }
    for(int i=2;i<=n;++i){
        pre[i]+=pre[i-1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    f(i, n){
        int x;
        cin >> x;
        arr[x]++;
    }
    createSieve(mxN);
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l>(int)1e7){
            cout << 0 << "\n";
            continue;
        }
        if(r>(int)1e7)r = (int)1e7;
        cout << pre[r]-pre[l-1] << "\n";
    }

}