#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    auto ok = [&](ll mid)
    {
        ll sum = 0;
        int cnt = 1;
        for(auto u : v)
        {
            if(u > mid) return false;
            if(u+sum > mid)
            {
                cnt++;
                sum = u;
            }
            else sum += u;
        }
        return cnt<=k;
    };

    ll l = 0, h = 1e16, mid;
    while(l<=h)
    {
        mid = l+(h-l)/2;
        if(ok(mid)) h = mid-1;
        else l = mid+1;
    }
    cout<<mid<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}