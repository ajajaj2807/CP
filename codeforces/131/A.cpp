// For page 'p', solve 'p/4 + 4' problems. 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    string s;
    cin >> s;
    int fl=0;
    for(int i=1;i<s.size();++i){
        if(s[i]>='a'&&s[i]<='z') fl=1;
    }
    if(fl){
        cout << s << endl;
        return 0;
    }
    for(int i=0;i<s.size();++i){
        if(s[i]>='a'&&s[i]<='z'){
            s[i] = s[i]-32;
        }
        else{
            s[i] = s[i]+32;
        }
    }
    cout << s;
}