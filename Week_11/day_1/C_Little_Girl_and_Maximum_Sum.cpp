#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n,q; cin>>n>>q;
    vector<ll>v(n),d(n+2),pre(n+1);
    for(auto &x : v) cin>>x;

    while(q--)
    {
        ll l,r; cin>>l>>r;
        d[l] += 1;
        d[r+1] -= 1;
    }

    for(int i=1; i<=n; ++i) pre[i] = pre[i-1]+d[i];

    sort(pre.rbegin(),pre.rend());
    sort(v.rbegin(),v.rend());

    ll sum = 0;
    for(int i=0; i<n; i++) sum += (pre[i]*v[i]);

    cout<<sum<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}