#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    if(v.size() == 1){
        cout<<0<<endl;
        return;
    }
    int ans = v[n-1]-v[0];

    for(int i=1; i<n; i++) ans = max(ans,v[i]-v[0]);
    for(int i=0; i<n-1; i++) ans = max(ans,v[n-1]-v[i]);
    for(int i=1; i<n; i++) ans = max(ans,v[i-1]-v[i]);

    cout<<ans<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}