#include<bits/stdc++.h>
#define ll long long
using namespace std; 


void solve()
{
    int n,x; cin>>n>>x;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;
    
    ll l = 0, r = 2e9+7,ans = 0;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        ll total = 0;
        
        for(int i=0; i<n; i++) total += max(1LL*0,mid-v[i]);
        
        if(total <= x) {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    
    cout<<ans<<endl;
    
}

int main()
{
    int tc; cin>>tc;
    while(tc--) solve();
}