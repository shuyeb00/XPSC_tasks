#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,m; cin>>n>>m;
    vector<ll>a(m),v;

    for(auto &x : a) cin>>x;
    sort(a.begin(),a.end());

    v.push_back((a[0]-1) + (n-a.back()));
    for(int i=1; i<m; i++) v.push_back(a[i]-a[i-1]-1);
    sort(v.rbegin(),v.rend());

    ll sv = 0, sp = 0;
    for(int i=0; i<v.size(); i++) {
        ll prot = v[i] - (2*sp);
       
        if(prot > 2) {
            sv += prot-1, sp += 2;
        } else if(prot <= 2 and prot > 0) {
            sv += 1, sp += 1;
        }
    }

    cout<<n-sv<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}