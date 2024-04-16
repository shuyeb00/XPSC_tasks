#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    vector<int>id;
    for(int i=0; i<n; i++) id.push_back(__lg(v[i]));

    map<int,int>mp;
    for(auto u : id) mp[u]++;

    ll cnt = 0;
    for(auto u : mp) cnt += (1LL*u.second*(u.second-1))/2;
    cout<<cnt<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}