#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    ll ans = 0;
    map<tuple<int,int,int>,int>mp;
    for(int i=0; i<n-2; i++)
    {
        auto trip = make_tuple(v[i],v[i+1],v[i+2]);
        vector<tuple<int,int,int>>sub;

        sub.push_back({0,v[i+1],v[i+2]});
        sub.push_back({v[i],0,v[i+2]});
        sub.push_back({v[i],v[i+1],0});

        for(auto u : sub)
        {
            ans += mp[u]-mp[trip];
            mp[u]++;
        }
        mp[trip]++;
    }

    cout<<ans<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}