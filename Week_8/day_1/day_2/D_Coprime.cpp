#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<ll>v;
    map<ll,ll>mp;

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        if(!mp[x]) v.push_back(x);
        mp[x] = i+1;
    }

    ll ans = -1;
    int s = v.size();

    for(int i=0; i<s; i++)
    {
        for(int j=i; j<s; j++)
        {
            if(__gcd(v[i],v[j]) == 1) ans = max(ans,mp[v[i]]+mp[v[j]]);
        }
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