#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(auto &x : v) cin>>x;
    
    auto ok = [&](ll m)
    {
        ll total = 0;
        for(int i=0; i<n; i++)
        {
            total += m/v[i];
            if(total >= t) return true;
        }
        return false;
    };

    ll l = 1, r = 1e18, ans = 0;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    cout<<ans<<endl;

    return 0;
}