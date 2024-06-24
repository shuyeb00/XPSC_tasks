#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    for(auto &u : v) if(u == 1) u += 1;
    for(int i=1; i<n; i++) {
        if(v[i] % v[i-1] == 0) v[i] += 1;
    }

    for(auto &u : v) cout<<u<<" ";
    cout<<endl;
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