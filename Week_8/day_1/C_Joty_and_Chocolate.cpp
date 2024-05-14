#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll lcm = (a/__gcd(a,b))*b;
    ll ans = 0;

    if(p > q) ans = (n/a)*p + ((n/b)-(n/lcm))*q;
    else ans = (n/b)*q + ((n/a)-(n/lcm))*p;

    cout<<ans<<endl;
    // cout<<lcm<<endl;

    return 0;
}