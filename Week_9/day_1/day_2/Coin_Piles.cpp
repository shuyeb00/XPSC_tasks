#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll a,b; cin>>a>>b;

    if(max(a,b) > min(a,b)*2 or (a+b)%3) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}