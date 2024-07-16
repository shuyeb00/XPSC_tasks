#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    map<int,int> mp;
    
    for (int i = 0; i < n; i++) {
    	for (int j = i + 1; j < n; j++) {
    		mp[v[i] + v[j]]++;
    	}
    }

    ll ans = -1e9;
    for (auto [x,y] : mp) {
    	ans = max(ans, 1ll*y);
    }

    cout << ans << '\n';
}

int32_t main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--) {
    	solve();
    }

    return 0;

}
