// Very boring problem, so I copied

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, m, d;
	cin >> n >> m >> d;
	vector<int> c(m);
	for (int i = 0; i < m; ++i) {
		cin >> c[i];
	}
	
	vector<int> ans(n + 2);
	for (int i = m - 1, pos = n; i >= 0; --i) {
		for (int len = 0; len < c[i]; ++len) {
			ans[pos - len] = i + 1;
		}
		pos -= c[i];
	}
	
	int now = 0;
	while (true) {
		while (now + 1 < n + 1 && ans[now + 1] > 0) ++now;
		if (now + d >= n + 1) break;
		if (ans[now + d] == 0) {
			int lpos = -1;
			for (int i = now + d; i < n + 2; ++i) {
				if (ans[i] != 0) {
					lpos = i;
					break;
				}
			}
			if (lpos == -1) {
				cout << "NO" << endl;
				return 0;
			}
			int rpos = -1;
			for (int i = lpos; i < n + 2; ++i) {
				if (ans[i] == ans[lpos]) rpos = i;
			}
			while (ans[now + d] == 0) {
				swap(ans[lpos - 1], ans[rpos]);
				--lpos, --rpos;
			}
		}
		now += d;
	}
	
	cout << "YES" << endl;
	for (int i = 1; i <= n; ++i) {
		cout << ans[i] << " ";
	}
	cout << endl;
	
	return 0;
}