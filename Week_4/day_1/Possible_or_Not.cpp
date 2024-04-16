#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,b; cin>>n>>b;
    vector<ll>v(n);

    int var;
    for(auto &x : v)
    {
        int a; cin>>a;
        if((a&b) == b) var &= a;
    }
    cout<<(var == b ? "YES" : "NO")<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}