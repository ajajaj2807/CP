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

int main() {
    string s, t, sl , sr;
    cin >> s;
    cin >> t;
    int brk;
    int n = s.size();
    for(int i=0;i<n;++i){
        if(s[i]=='|')brk = i;
    }
    sl = s.substr(0, brk);
    sr = s.substr(brk+1, n-brk-1);
    int i=0;
    while(i<t.size()){
        if(sl.size()<sr.size()){
            sl+=t[i++];
        }else{
            sr+=t[i++];
        }
    }
    if(sl.size()==sr.size())
    cout << sl << "|" << sr;
    else cout << "Impossible";
}