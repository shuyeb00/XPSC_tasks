#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,k; cin>>n>>k;
    vector<ll>v(n),cnt(31,0);
    for(auto &x : v) cin>>x;

    for(auto &u : v) {
        for(int i=30; i>=0; i--) {
            if(u & (1<<i)) cnt[i]++;
        }
    }

    ll res = 0;
    for(int i=30; i>=0; i--) {
        int rem = n-cnt[i];
        if(rem <= k) {
            res += (1<<i);
            k -= rem;
        }
    }

    cout<<res<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}