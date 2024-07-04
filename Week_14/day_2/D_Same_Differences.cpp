#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n; 
    cin >> n;

    int cnt = 0;
    map<int,int>mp;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        mp[x-i]++;
    }

    for (auto [x,y] : mp) {
        if (y == 2) cnt++;
        else if (y > 2) {
            cnt += (1LL*(y-1)*y) / 2;
        }
    }

    cout << cnt << "\n";
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
