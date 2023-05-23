#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a < b)
		cout << (a + x >= b ? "YES" : "NO");
	else
		cout << (a - y <= b ? "YES" : "NO");
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--)
		solve();
}
