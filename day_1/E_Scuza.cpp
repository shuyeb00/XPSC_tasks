#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,q; cin>>n>>q;
    vector<ll>v(n),pre(n),maxi(n);
    for(auto &x : v) cin>>x;

    pre[0] = v[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1]+v[i];
    
    maxi[0] = v[0];
    ll mx = v[0];
    for(int i=1; i<n; i++)
    {
        maxi[i] = max(mx,v[i]);
        mx = maxi[i];
    }

    auto ok = [&](int x)
    {
        int l = 0, r = n-1, ans = -1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            
            if(maxi[mid] <= x)
            {
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        return ans;
    };

    while(q--)
    {
        int x; cin>>x;

        cout<<(ok(x) >= 0 ? pre[ok(x)] : 0)<<" ";
    }
    cout<<endl;

}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}