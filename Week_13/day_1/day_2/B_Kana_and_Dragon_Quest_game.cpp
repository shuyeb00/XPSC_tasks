#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    ll h,n,m; cin>>h>>n>>m;
    ll tmp = h;

    int cnt = n;
    while(cnt) {
        if(((tmp/2) + 10) < tmp) tmp = (tmp/2) + 10;
        cnt--;
    }
    tmp -= (m*10);
    
    cout<< (tmp <= 0 ? "YES" : "NO") <<endl;
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