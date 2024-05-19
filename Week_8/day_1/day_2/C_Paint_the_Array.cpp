#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n; cin>>n;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];

    ll gcd1 = v[1];
    for(int i=3; i<=n; i+=2) gcd1 = __gcd(gcd1,v[i]);

    ll gcd2 = v[2];
    for(int i=4; i<=n; i+=2) gcd2 = __gcd(gcd2,v[i]);

    bool f1 = true, f2 = true;

    for(int i=1; i<=n; i+=2) if(v[i]%gcd2 == 0) f2 = false;
    for(int i=2; i<=n; i+=2) if(v[i]%gcd1 == 0) f1 = false;

    if(f1 || f2) cout<<(f1 ? gcd1 : gcd2)<<endl;
    else cout<<0<<endl;

    // cout<<gcd1<<" "<<gcd2<<endl;


}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}