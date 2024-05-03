#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,x,y; cin>>n>>x>>y;

    ll mn = min(x,y), mx = max(x,y);

    auto ok = [&](ll m)
    {
        if(m < mn) return false;
        m -= mn;
        return ((m/mx) + (m/mn) >= n-1);
    };

    ll l = 1, r = 2e9, ans = 0;
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