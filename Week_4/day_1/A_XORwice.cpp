#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll a,b; cin>>a>>b;
    cout<<(a^b)<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    cin>>tc;

    while(tc--) solve();

    return 0;
}