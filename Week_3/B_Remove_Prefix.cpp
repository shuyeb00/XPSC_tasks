#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    map<ll,int>mp;
    for(int i=n-1; i>=0; i--)
    {
        mp[v[i]]++;
        if(mp[v[i]] > 1)
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<0<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}