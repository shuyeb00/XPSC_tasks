#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,k; cin>>n>>k;
    vector<int>v(k);
    for(auto &x : v) cin>>x;
    sort(v.begin(),v.end());

    auto ok = [&](int mid)
    {
        ll sum = 0;
        for(int i=mid; i<k; i++)
        {
            if(sum >= v[i]) return false;
            sum += (n-v[i]);
        }
        return true;
    };

    int l = 0, r = k-1, ans = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ok(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    cout<<k-ans<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}