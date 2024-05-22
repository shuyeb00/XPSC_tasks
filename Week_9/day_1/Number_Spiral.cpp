#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll x,y; cin>>y>>x;
    
    if(y > x) cout<<(y&1 ? (y-1)*(y-1)+1+(x-1) : (y*y) - (x-1))<<endl;
    else cout<<(x&1 ? (x*x) - (y-1) : (x-1)*(x-1)+1+(y-1))<<endl;
}

int main()
{
    code();
    
    ll tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}