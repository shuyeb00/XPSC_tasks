#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;
    int ans = v[0];

    for(int i=1; i<v.size(); i++) ans ^= v[i];
    int tmp = ans;
    for(int i=0; i<v.size(); i++) ans = min(ans,tmp^v[i]);

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