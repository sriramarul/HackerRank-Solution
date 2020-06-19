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

	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{
	long long int a, b, n, count = 0;
	cin >> a >> b >> n;
	while (a <= n && b <= n) {
		if (a > b) {
			b = b + a;
		} else {
			a = a + b;
		}
		count++;

	}
	cout << count;

}