#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    ll x,y,k;
    cin>>x>>y>>k;

    while(x > 1 && k > 0) {
        ll step = (y - (x % y));
        
        if(k <= step) {
            x += k;
            k = 0;
        } else {
            x += step;
            k -= step;
        }
        while(x % y == 0) x /= y;
    }

    if(k > 0) x += (k % (y - 1));
    
    cout<<x<<endl;
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