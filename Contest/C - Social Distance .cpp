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
	}	return 0;
}
void solve()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int a[n], b[n] = {0}, flag = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			a[i] = 1;
		} else {
			a[i] = 0;
		}
		//cout << a[i] << " ";
	}

	for (int i = 0; i < n; i++) {
		//cin >> a[i];
		if (a[i] == 1) {
			flag = 1;
			b[i] = 1;
			if ((i - k) >= 0) {
				for (int j = i - k; j <= i; j++) {
					b[j] = 1;
				}
			} else {
				for (int j = 0; j <= i; j++) {
					b[j] = 1;
				}
			}
			if ((i + k) < n) {
				for (int j = i; j <= i + k; j++) {

					b[j] = 1;
				}
			} else {
				for (int j = i; j < n; j++) {
					b[j] = 1;
				}
			}
		}
	}
	int count = 0, res = 0;
	if (flag == 1) {
		for (int i = 0; i < n; i++) {
			if (b[i] == 0) {
				count++;
				if ((i - k) >= 0) {
					for (int j = i - k; j <= i; j++) {
						b[j] = 1;
					}
				} else {
					for (int j = 0; j <= i; j++) {
						b[j] = 1;
					}
				}
				if ((i + k) < n) {
					for (int j = i; j <= i + k; j++) {

						b[j] = 1;
					}
				} else {
					for (int j = i; j < n; j++) {
						b[j] = 1;
					}
				}
			}
		}
		res = count;
	} else {
		for (int i = 0; i < n; i = i + k + 1) {
			count++;
		}
		res = count;
	}
	cout << res;
}
