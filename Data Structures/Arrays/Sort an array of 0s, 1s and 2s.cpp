#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], one = 0, two = 0, zero = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 0) {
				zero++;
			} else if (a[i] == 1) {
				one++;
			} else {
				two++;
			}
		}
		while (zero > 0) {
			cout << 0 << " ";
			zero--;
		}
		while (one > 0) {
			cout << 1 << " ";
			one--;
		}
		while (two > 0) {
			cout << 2 << " ";
			two--;
		}
		cout << "\n";

	}
	return 0;
}
