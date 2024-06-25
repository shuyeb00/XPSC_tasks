#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n,k,d,w;
    cin>>n>>k>>d>>w;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    int dose = k, exp = 0,cnt = 0;
    for(int i=0; i<n; i++) {
        if(i == 0 || dose <=0 || exp < v[i]) {
            cnt++;
            dose = k, exp = w + v[i] + d;
        }
        dose--;
    }

    cout<<cnt<<endl;
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
