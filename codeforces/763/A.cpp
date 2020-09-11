#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int mxN = 1e5;
bool ok;
int currc = 0;
vector<int> adj[mxN];
int c[mxN];

void dfs(int u, int p)
{
    ok = ok && (c[u] == currc);
    for (auto v : adj[u])
    {
        if (v ^ p)
            dfs(v, u);
    }
}

bool helper(int u)
{
    bool ans = true;
    for (auto v : adj[u])
    {
        ok = true;
        currc = c[v];
        dfs(v, u);
        ans = ans && ok;
    }
    return ans;
}

int main()
{
    int n, ans;
    map<int, int> mp;
    cin >> n;
    for (int i = 0, a, b; i < n - 1; ++i)
    {
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    int r1 = -1, r2 = -1;
    for (int i = 0; i < n; ++i)
    {
        for (auto u : adj[i])
        {
            if (c[i] ^ c[u])
            {
                r1 = i;
                r2 = u;
            }
        }
    }

    if (r1 == -1)
    {
        cout << "YES\n" << 1;
        return 0;
    }

    int a = helper(r1);
    int b = helper(r2);
    if (a==1)
    {
        cout << "YES\n";
        cout << r1 + 1;
    }
    else if (b)
    {
        cout << "YES\n";
        cout << r2 + 1;
    }
    else
    {
        cout << "NO";
    }
}
