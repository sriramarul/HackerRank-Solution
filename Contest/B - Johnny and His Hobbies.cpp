#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		int n;
		cin >> n;
		int a[n];
		int b[100000] = {0};
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[a[i]] = 1;
		}
		int count = 0, result = 0;
		while (true) {
			int flag = 0;
			count++;
			for (int i = 0; i < n; i++) {

				if (b[a[i]^count] != 1) {
					flag = 1;
					break;
				}

			}
			if (flag == 0) {
				result = count;
				break;
			}
			if (count > 1024) {
				result = -1;
				break;
			}
		}
		if (n == 1) {
			result = -1;
		}
		cout << result << "\n";


	}

}

