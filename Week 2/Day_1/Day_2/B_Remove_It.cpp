#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,x; cin>>n>>x;
    vector<ll>v(n),ans;
    for(auto &u : v)
    {
        cin>>u;
        if(u != x) ans.push_back(u);
    }

    for(auto u : ans) cout<<u<<" ";

    return 0;
}