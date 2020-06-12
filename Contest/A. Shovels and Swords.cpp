#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i<n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast;
	//Enter your code here
	int t;
	cin >> t;
	while (t--) {
		long long int a, b, count = 0, temp;
		cin >> a >> b;
		if (a != 0 && b != 0) {
			if (a > b) {
				if (a / 2 >= b) {
					count = b;
				} else {
					temp = a + b;
					count = temp / 3;
				}
			} else if (b > a) {
				if (b / 2 >= a) {
					count = a;
				} else {
					temp = a + b;
					count = temp / 3;
				}

			} else {
				temp = a + b;
				count = temp / 3;
			}

		}
		cout << count << "\n";
	}


}

