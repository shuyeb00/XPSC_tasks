#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll divisor(ll n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0) return i;
    }
    return n;
}

void solve()
{
    ll l,r; cin>>l>>r;

    if(l<=3 and r<=3) cout<<-1<<endl;
    else if(r-l > 1) 
    {
        if(r & 1) r--;
        cout<<r/2<<" "<<r/2<<endl;
    }
    else {
        if(divisor(l) == l) cout<<-1<<endl;
        else cout<<divisor(l) <<" "<< l-divisor(l)<<endl;
    }
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}