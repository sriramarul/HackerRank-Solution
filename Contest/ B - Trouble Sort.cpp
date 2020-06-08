#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	for (int l = 0; l < t; l++) {
		int n, flag = 0, minf = 0;
		cin >> n;
		if (n == 1) {
			flag = 1;
		}
		int v[n];
		int t[n];
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < n - 1; i++) {
			if (v[i] > v[i + 1]) {
				minf = 1;
				break;
			}
		}
		if (minf == 0) {
			flag = 1;
		}
		int one = 0, zero = 0;
		for (int j = 0; j < n; j++) {
			cin >> t[j];
			if (t[j] == 1) {one++;} else {zero++;}
		}
		if (one > 0 && zero > 0) {
			flag = 1;
		}
		if (flag == 0) {
			cout << "No";
		} else {
			cout << "Yes";
		} cout << "\n";
	}
}

