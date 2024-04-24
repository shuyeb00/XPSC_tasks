#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    ll nigga = 0;
    ll pos = 0;

    for(auto u : v)
    {
        if(u<0)
        {
            if(pos >= abs(u)) pos += u;
            else{
                nigga += pos+u;
                pos = 0;
            }
        }
        else pos += u;
    }

    cout<<pos<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}