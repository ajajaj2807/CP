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

// bool eq(string s, string t){
//     bool flag = 0;
//     if(s.size()%2){
//         f(i, s.size()) if(s[i]!=t[i]) {flag=1;break;}
//         if(!flag) return true; 
//         return false;
//     }
//     string s1 = s.substr(0, s.size()/2);
//     string s2 = s.substr(s.size()/2, s.size()/2);
//     string t1 = t.substr(0, t.size()/2);
//     string t2 = t.substr(t.size()/2, t.size()/2);
//     return (eq(s1, t1)&&eq(s2, t2))||(eq(s1, t2)&&eq(s2, t1));

// }

string smallest(string s) {
    if (s.length() % 2 == 1) return s;
    string s1 = smallest(s.substr(0, s.length()/2));
    string s2 = smallest(s.substr(s.length()/2, s.length()/2));
    if (s1 < s2) return s1 + s2;
    else return s2 + s1;
}

int main() {
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()) {
        cout << "NO";
        return 0;
    }
    if(s.size()%2){
        f(i, s.size()) if(s[i]!=t[i]){cout << "NO";return 0;}
        cout << "YES";
        return 0;
    }

    string sn = smallest(s);
    string tn = smallest(t);

    cout << (sn==tn?"YES":"NO");
}