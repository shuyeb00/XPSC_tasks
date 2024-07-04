#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n; 
    cin >> n;

    vector<int> v(n), vec;
    for (auto &x : v) cin >> x;
    
    int pos = min_element(v.begin(), v.end()) - v.begin();

    if (is_sorted(v.begin() + pos, v.end())) cout << pos << "\n";
    else cout << -1 << "\n";

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--) {
        solve();
    }

    return 0;

}