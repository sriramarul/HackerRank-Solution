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
	int n;
	cin >> n;
	int a[n], flag = 0, odd = 0, even = 0, result = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if ((a[i] % 2) != (i % 2)) {

			flag = 1;
			if (a[i] % 2) {
				odd++;
			} else {
				even++;
			}
		}
	}
	if (flag == 0) {
		result = 0;
	} else {
		int count = 0;
		while (odd > 0 && even > 0) {
			odd--;
			even--;
			count++;
		}
		result = count;
		if (odd > 0 || even > 0) {
			result = -1;
		}
	}
	cout << result;

}