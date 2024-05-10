#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,k; cin>>n>>k;
    ll ans = 0, pw = 1;

    for(int i=0; i<31; ++i)
    {
        if(k & (1<<i)) ans = (ans+pw) % MOD;
        pw = (pw*n) % MOD;
    }
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