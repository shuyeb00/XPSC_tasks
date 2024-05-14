#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;

    // if(n & 1) cout<<__gcd(n/2,n-1)<<endl;
    // else cout<<__gcd(n,n/2)<<endl;

    cout<<n/2<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}