#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m, a;
	cin >> n >> m >> a;
	cout << ((m + a - 1) / a) * ((n + a - 1) / a) << '\n';
	return 0;
}
