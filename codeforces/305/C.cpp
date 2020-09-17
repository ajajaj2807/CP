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
const int mxN = 1e5;

int main() {
    int n;
    cin >> n;
    map<int, int> fq;
    ll arr[n], sz=n;
    f(i, n) {
        cin >> arr[i];
        fq[arr[i]]++;
    }
    ll mx=arr[n-1];
    queue<int> qq;
    f(i, n){
        ll el = arr[i];
        int cf = fq[el];
        if(cf>1){
        fq[el]=cf%2;
        fq[el+1] = cf/2;
        qq.push(el+1);
        sz-= cf/2;
        mx = max(mx, el+1);
        }
    }

    while(!qq.empty()){
        ll el = qq.front();
        qq.pop();
        int cf=fq[el];
        if(cf>1){
        fq[el] = cf%2;
        fq[el+1] += cf/2;
        qq.push(el+1);
        sz-=cf/2;
        mx=max(mx, el+1);
        }
    }
    cout << mx-sz+1;
}
