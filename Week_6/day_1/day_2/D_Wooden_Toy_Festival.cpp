#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;  
    sort(v.begin(),v.end());

    auto ok = [&](ll m)
    {
        int l=0,r=0,cnt=0;
        while(r<n)
        {
            if(v[r]-v[l] > 2*m)
            {
                cnt++;
                l = r;
            }
            r++;
        }

        return cnt<3;
    };

    ll l=0,h=2e9,ans = 0;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(ok(mid)){
            h = mid-1;
            ans = mid;
        }
        else l = mid+1;
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