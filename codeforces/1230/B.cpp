// For page 'p', solve 'p/4 + 4' problems. 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    if(m==0){
        cout << s;
        return 0;
    }
    if(s.size()==1&&n){
        cout << 0;
        return 0;
    }
    if(s[0] != '1'){
        s[0] = '1';
        m--;
    }

    int i=1;
    while(m&&i<s.size()){
        if(s[i] != '0'){
            s[i] = '0';
            m--;
        }
        i++;
    }

    cout << s;

}