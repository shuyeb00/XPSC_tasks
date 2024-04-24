#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll a,b,n,s; cin>>a>>b>>n>>s;

    if(a*n+b >= s and s%n <= b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}