#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,q; cin>>n>>q;
    vector<ll>v(n),pre(n);

    for(auto &x : v) cin>>x;

    pre[0] = v[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1] + v[i];

    while(q--)
    {
        ll l,r,k; cin>>l>>r>>k;
        l--,r--;

        ll bad;
        if(l == 0) bad = pre[r];
        else bad = pre[r] - pre[l-1];
        
        ll sum = pre[n-1] - bad;
        ll add = k * (r-l+1);
        ll total = sum + add;
        cout<<(total&1 ? "YES" : "NO")<<endl;
    }
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}