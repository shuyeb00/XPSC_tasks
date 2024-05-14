#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(ll n)
{
    if(n == 1) return 0;
    for(ll i=2; i*i<=n; i++) if(n%i == 0) return 0;
    return 1;
}

void solve()
{
    ll n; cin>>n;
    vector<ll>v;

    if(isPrime(n)) cout<<1<<endl;
    else if(n & 1 && isPrime(n-2) || n%2 == 0) cout<<2<<endl;
    else cout<<3<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}