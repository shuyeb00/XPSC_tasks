#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,m,h; cin>>n>>m>>h;
    vector<ll>a(n),b(m);

    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    ll ans = 0;
    for(int i=0,j=0; i<n and j<m; i++,j++) ans += min(a[i],b[j]*h);
    cout<<ans<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}