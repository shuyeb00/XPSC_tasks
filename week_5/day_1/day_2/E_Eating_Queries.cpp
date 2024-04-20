#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int binary(vector<ll>&v, int x)
{
    int l = 0, r = v.size()-1, idx = -1;
    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] >= x){
            idx = mid+1;
            r = mid-1;
        }
        else l = mid+1;
    }

    return idx;
}

void solve()
{
    int n,q; cin>>n>>q;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    sort(v.rbegin(),v.rend());
    vector<ll>pre(n);

    pre[0] = v[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1] + v[i];

    while(q--)
    {
        ll x; cin>>x;
        // cout<<binary(pre,x)<<endl;
        auto it = lower_bound(pre.begin(),pre.end(),x);
        cout<<(it == pre.end() ? -1 : it-pre.begin()+1)<<endl;
    }

}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}