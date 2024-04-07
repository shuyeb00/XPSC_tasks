#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,q; cin>>n>>q;
    map<ll,ll>left,right;

    for(int i=0; i<n; i++)
    {
        ll x; cin>>x;
        if(left[x] == 0) left[x] = i+1;
        right[x] = i+1;
    }

    while(q--)
    {
        ll l,r; cin>>l>>r;
        if(left[l] < right[r] and left[l] and right[r]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();
    return 0;
}