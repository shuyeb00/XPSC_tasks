#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    int x = 0, y = 0;
    for(auto u : v) x ^= u;
    for(int i=0; i<n; i++) v[i] ^= x;
    for(auto u : v) y ^= u;

    if(!y) cout<<x<<endl;
    else cout<<-1<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}