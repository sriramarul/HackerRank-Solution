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
{	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			cout<<1;
			return;
		}
	}
	cout<<n;
	return ;
}


