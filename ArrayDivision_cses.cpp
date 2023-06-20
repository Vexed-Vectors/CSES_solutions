#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k; cin >> n >> k;
	vector<ll> a(n);
	// The maximum sum possible is the sum of all the elements in the vector.
	ll max_sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		max_sum = max_sum + a[i];
	}

	ll lo = 0, hi = max_sum, ans = 0;
	auto works = [&] (ll mid) {
		int groups = 0;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > mid) {
				return false;
			}
			if (sum + a[i] > mid) {
				++groups;
				sum = 0;
			}
			sum += a[i];
		}
		if (sum > 0) {
			++groups;
		}
		return groups <= k;
	};
	while (lo <= hi) {
		ll mid = (lo + hi) / 2;
		if (works(mid)) {
			hi = mid - 1;
			ans = mid;
		}
		else {
			lo = mid + 1;
		}
	}
	cout << ans << '\n';
}
