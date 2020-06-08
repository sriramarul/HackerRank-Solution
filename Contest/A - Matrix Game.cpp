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
		int n, m;
		cin >> n >> m;
		int a[n][m];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];

			}
		}
		int count = 0;
		while (true) {
			int max = -1, maxi = 0, maxj = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (a[i][j] == 0) {
						int flag1 = 0, flag2 = 0;
						for (int k = n - 1; k >= 0; k--) {
							if (a[k][j] == 1) {
								flag1 = 1;
								break;
							}
						} for (int k = m - 1; k >= 0; k--) {
							if (a[i][k] == 1) {
								flag2 = 1;
								break;
							}
						}
						if (flag1 == 0 && flag2 == 0 && (i * j) > max) {
							max = i * j;
							maxi = i;
							maxj = j;

						}
					}
				}
			}

			if (max != -1) {
				a[maxi][maxj] = 1;
				count++;
			} else {
				break;
			}
		}
		if (count % 2 == 0) {
			cout << "Vivek";
		} else {
			cout << "Ashish";
		}
		cout << "\n";
	}
}

