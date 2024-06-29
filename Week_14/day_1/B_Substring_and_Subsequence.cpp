#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    string a, b; cin >> a >> b;

    ll ans = 0;
    for(int i=0; i<b.size(); i++) {
        int idx = i, cnt = 0;
        for(int j=0; j<a.size(); j++) {
            if(idx < b.size() and b[idx] == a[j]) cnt++, idx++;
        }
        ans = max(ans, 1ll*cnt);
    }

    cout << a.size() + (b.size() - ans) << endl;
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