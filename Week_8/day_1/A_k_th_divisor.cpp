#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,k; cin>>n>>k;
    vector<ll>v;
    set<ll>st;

    for(ll i=1; i*i<=n; ++i)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            if(i != n/i) v.push_back(n/i);
        }
    }
    
    sort(v.begin(),v.end());
    cout<<(v.size()<k ? -1 : v[k-1])<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}