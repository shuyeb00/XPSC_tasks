#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    ll h,n; cin>>h>>n;
    vector<ll>a(n),b(n);
 
    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;
 
    for(auto u : a) h -= u;
    if(h <= 0){
        cout<<1<<endl;
        return;
    }
 
    auto ok = [&](ll mid)
    {
        ll tmp = 0;
        for(int i=0; i<n; i++) tmp += (mid/b[i])*a[i];
 
        return tmp >= h;
    };
 
    ll l = 0, r = 2e11,ans = 0;
    while(l <= r)
    {
        ll mid = (l+r)>>1;
        if(ok(mid)){
            r = mid-1;
            ans = mid;
        }
        else l = mid+1;
    }
 
    cout<<ans+1<<endl;
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
