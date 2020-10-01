#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int chk=0;
int n,m;
string s[60];
int vis[60][60];

void dfs(int i,int j)
{
    vis[i][j]=1;
    chk++;
    if(i+1<n && s[i+1][j]=='#' && vis[i+1][j]==0)
    {
        dfs(i+1,j);
    }
    if(j+1<m && s[i][j+1]=='#' && vis[i][j+1]==0)
    {
        dfs(i,j+1);
    }
    if(i-1>=0 && s[i-1][j]=='#' && vis[i-1][j]==0)
    {
        dfs(i-1,j);
    }
    if(j-1>=0 && s[i][j-1]=='#' && vis[i][j-1]==0)
    {
        dfs(i,j-1);
    }
}

int main() 
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    cin>>s[i];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    vis[i][j]=0;
    int ans=2,cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                cnt++;
            }
        }
    }
    if(cnt<=2)
    {
        cout<<"-1";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                for(int k=0;k<n;k++)
                for(int l=0;l<m;l++)
                vis[k][l]=0;
                chk=0;
                s[i][j]='.';
                if(i+1<n && s[i+1][j]=='#')
                    dfs(i+1,j);
                else if(j+1<m && s[i][j+1]=='#')
                    dfs(i,j+1);
                else if(i-1>=0 && s[i-1][j]=='#')
                    dfs(i-1,j);
                else if(j-1>=0 && s[i][j-1]=='#')
                    dfs(i,j-1);
               if(chk!=cnt-1)
                ans=1;
                s[i][j]='#';
            }
        }
    }
    cout<<ans<<endl;
	return 0;
}