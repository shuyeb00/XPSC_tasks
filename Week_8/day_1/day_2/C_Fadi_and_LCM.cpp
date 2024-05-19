#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll x; cin>>x;
    auto coprime = [&](ll a,ll b) {return __gcd(a,b) == 1;};

    ll ans = 0;
    for(ll i=1; i*i<=x; ++i) if(x%i == 0 && coprime(i,x/i)) ans = i;

    cout<<ans<<" "<<x/ans<<endl;

    return 0;
}