#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll a,b; cin>>a>>b;
    
    while(true)
    {
        ll p = __gcd(a,b);
        if(p == 1) break;
        b /= p;
    }

    cout<<(b==1 ? "Yes" : "No")<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}