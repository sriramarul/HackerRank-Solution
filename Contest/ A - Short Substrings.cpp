#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i<n; i++)
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
typedef long long int ll;

void solve();
int main() {
	fast;
	int t = 1;
	/*is Single Test case?*/ cin >> t;
	while (t--) {
		solve();
		cout << "\n";
	}
	return 0;
}
void solve()
{
	string s;
	cin >> s;
	string res;
	for (int i = 0; i < s.length() - 1; i++) {
		if (i % 2 == 0) {
			res = res + s[i];
		}
	}
	cout << res + s[s.length() - 1];
}
