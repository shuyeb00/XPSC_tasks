#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    ll x = (n*(n+1))/2;

    for(int i=1; i<=n; i++){
        if(i == 1) cout<<x%n + 1<<" ";
        else cout<<i<<" ";
    }

    cout<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}