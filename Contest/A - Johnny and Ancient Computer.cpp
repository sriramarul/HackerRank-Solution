#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	for(i=0;i<n;i++) {
		long long int a, b, temp, temp1;
		cin >> a >> b;
		int arr[3] = {2, 4, 8};
		int result = 0;
		int count = 0, t = 8, t1 = 2, flag = 0;

		if (a > b) {
			while (t > 1 ) {
				if (a == b) {
					flag = 1;
					break;
				} else {

					count++;
					temp = a;
					if (a % t == 0) {
						a = a / t;
					} else {
						t = t / 2;
						count--;
						continue;
					}
					if (a < b) {
						a = temp;
						count--;
						t = t / 2;
					}
				}

			}
		} else if (a < b) {
			while (t > 1 ) {
				if (a == b) {
					flag = 1;
					break;
				} else {
					count++;
					temp = b;
					if (b % t == 0) {
						b = b / t;
					} else {
						t = t / 2;
						count--;
						continue;
					}
					if (a > b) {
						b = temp;
						count--;
						t = t / 2;
					}
				}
			}
		} else if (a == b) {
			flag = 1;
			count = 0;
		}
		if (flag == 1) {
			cout << count << "\n";
		} else {
			cout << -1 << "\n";
		}
	}
}

