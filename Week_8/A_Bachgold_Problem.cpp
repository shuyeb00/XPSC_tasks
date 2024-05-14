#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    
    if(n&1)
    {
        cout<<((n-3)/2)+1<<endl;
        for(int i=1; i<=(n-3)/2; i++) cout<<2<<" ";
        cout<<3<<endl;
    }
    else {
        cout<<n/2<<endl;
        for(int i=1; i<=(n/2); i++) cout<<2<<" ";
        cout<<endl;
    }
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}