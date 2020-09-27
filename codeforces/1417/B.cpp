// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define pii pair<int, int>
// #define vi vector<int>
// #define si set<int>
// #define mset(arr, val) memset(arr, val, sizeof(arr))
// #define f(i, n) for (int(i) = 0; (i) < (n); (i)++)
// #define dbg(x) cout << #x << " - " << x << "\n";
// #define all(x) (x).begin(), (x).end()

// const int MOD = 1e9 + 7;
// const int mxN = 1e5;

// void solve()
// {
//     int n, t;
//     cin >> n >> t;
//     vector<pii> arr(n);
//     map<int, vector<int>> idxs;
//     f(i, n)
//     {
//         int x;
//         cin >> x;
//         arr[i] = mp(x, i);
//         idxs[x].pb(i);
//     }
//     int res[n] = {0};
//     sort(arr.begin(), arr.end());
//     map<int, vector<int>> ps;
//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         int cs = arr[i].ff + arr[j].ff;
//         if (cs == t)
//         {
//             ps[i].pb(j);
//             j--;
//             i++;
//         }
//         else if (cs > t)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     map<int, int> cnt;
//     f(i, n)
//     {
//         if (res[arr[i].ss] != 0)
//             continue;
//         res[arr[i].ss] = 1;
//         for (auto v : ps[i])
//         {
//             {
//                 for (auto idx : idxs[arr[v].ff])
//                 {
//                     if(cnt[arr[v].ff]> idxs[arr[v].ff].size()/2) break;
//                     // dbg(cnt[arr[v].ff]);
//                     // dbg(idxs[arr[v].ff].size());
//                     if (arr[i].ss ^ idx)
//                     {
//                         res[idx] = 2;
//                         cnt[arr[v].ff]++;
//                     }
//                 }

//             }
//         }
//     }
//     f(i, n) cout << res[i] - 1 << " ";
//     cout << "\n";
// }

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//         solve();
// }


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
#define dbg(x) cout<<#x<<" - "<<x<<"\n";
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9+7;
const int mxN = 1e5;

void solve() {
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    map<int,vector<int>> mp;
    f(i, n)
    {
        int x;
        cin >> x;
        arr[i] = x;
        mp[x].pb(i);
    }
    int ans[n] = {0};
    int cnt = 0;
    f(i, n){
        if(ans[i]) continue;
        int cd = t-arr[i];
        if(cd==(t/2) && arr[i]==(t/2))
        {
            if(cnt<mp[cd].size()/2){
                ans[i] = 1;
            } else{
                ans[i] = 2;
            }
            cnt++;
            continue;
        }
        ans[i] = 1;
        // dbg(ans[i]);

        for(auto id:mp[cd]){
            if(ans[id]) continue;
            ans[id] = 2;
        }
    }
    f(i,n) cout << ans[i]-1 << " ";
    cout << "\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}