#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i<n; i++)
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
typedef long long int ll;

int x;
void solve();

int main() {
	fast;
	int t = 1;
	/*is Single Test case?*/ cin >> t;
	while (t--) {
		solve();
		cout << "\n";
	}
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{	string s;
	cin >> s;
	while (s.length() > 0) {
		string news = "";
		int flag = 0;
		for (int i = 0; i < s.length() - 1; i++) {
			//cout << s << "------\n";
			if ((char)(s[i] - 32) == s[i + 1] || s[i] == (char)(s[i + 1] - 32)) {
				{	//cout << i << " " << i + 1 << "\n";
					flag = 1;
					for (int k = 0; k < i; k++) {
						news = news + s[k];
					}
					if (i + 2 <= s.length()) {
						for (int k = i + 2; k < s.length(); k++) {
							news = news + s[k];
						}
					}
				}

			}
			if (flag == 1) {
				break;
			}

		}
		if (flag == 0) {
			break;
		} else {
			s = news;
		}
	}
	cout << s;
}

