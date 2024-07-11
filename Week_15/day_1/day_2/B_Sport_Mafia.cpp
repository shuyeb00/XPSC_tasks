#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n, k;
    cin >> n >> k;

    ll l = 0, h = 2*n;
    while (l <= h) {
        ll mid = (l + h) >> 1;
        ll x = n - mid;
        ll ans = ((x * (x+1)) >> 1) - mid;
        
        if (ans == k) {
            cout << mid << "\n";
            return;
        }

        if (ans > k) l = mid + 1;
        else h = mid - 1;
    }
    
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