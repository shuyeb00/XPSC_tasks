#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,k,q; cin>>n>>k>>q;
    vector<ll>d(k+1),t(k+1);

    for(int i=1; i<=k; i++) cin>>d[i];
    for(int i=1; i<=k; i++) cin>>t[i];

    while(q--)
    {
        ll x; cin>>x;

        if(x == 0){
            cout<<0<<" ";
            continue;
        }

        if(x == n){
            cout<<t.back()<<" ";
            continue;
        }

        int i = upper_bound(d.begin(),d.end(),x) - d.begin();

        ll dis = d[i]-d[i-1];
        ll time = t[i]-t[i-1];

        ll ans = ((x-d[i-1])*time)/dis;
        cout<<ans+t[i-1]<<" ";
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