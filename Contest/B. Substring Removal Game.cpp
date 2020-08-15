#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
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
{
	string s;
	cin >> s;
	vector<int> v;
	int sum = 0, flag = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {

			if (flag == 1) {

				v.push_back(sum);
				flag = 0;
			}
			sum = 0;
		} else {
			sum++;
			flag = 1;
		}
	}
	if (flag == 1) {
		v.push_back(sum);
	}
	sort(v.begin(), v.end());
	int max = 0;
	for (int i = v.size() - 1; i >= 0; i = i - 2) {
		max = max + v[i];
	}
	cout << max;

}