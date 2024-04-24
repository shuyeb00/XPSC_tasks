#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,c; cin>>n>>c;
    vector<ll>v(n),cost;
    for(auto &x : v) cin>>x;

    for(int i=0; i<n; i++) cost.push_back(v[i]+i+1);
    ll telep = 0;

    sort(cost.begin(),cost.end());
    for(auto u : cost)
    {
        c -= u;
        if(c<0) break;
        telep++;
    }
    cout<<telep<<endl;

}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}