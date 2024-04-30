#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    sort(v.begin(),v.end());
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for(int i=n/2; i<n; ++i)
        {
            cnt += v[i]<mid ? mid-v[i] : 0;
        }
        return cnt<=k;
    };

    ll l = 1, r = 2e9, ans = 0;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    cout<<ans<<endl;

    return 0;
}