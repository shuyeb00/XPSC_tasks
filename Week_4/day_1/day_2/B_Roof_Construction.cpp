#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    int bit = (1<<__lg(n-1));
    
    for(int i=bit-1; i>=0; i--) cout<<i<<" ";
    for(int i=bit; i<n; i++) cout<<i<<" ";
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