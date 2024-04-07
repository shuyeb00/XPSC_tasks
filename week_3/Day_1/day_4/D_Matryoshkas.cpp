#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    sort(v.rbegin(),v.rend());
    vector<pair<ll,ll>>vp;

    for(int i=0; i<n;)
    {
        int j = i;
        while(i<n and v[i] == v[j]) i++;
        vp.push_back({v[j],i-j});
    }

    ll ans = vp[0].second;
    for(int i=1; i<vp.size(); i++)
    {
        if(vp[i].first+1 == vp[i-1].first) ans += max(vp[i].second-vp[i-1].second,0LL);
        else ans += vp[i].second;
    }

    cout<<ans<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}