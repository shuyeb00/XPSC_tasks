#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>a(n),b(n);

    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;

    int diff = 0;
    for(int i=0; i<n; ++i) if(a[i] > b[i]) diff = max(diff,a[i]-b[i]);
    for(int i=0; i<n; ++i) a[i] = max(0,a[i]-diff);

    cout<<(a == b ? "YES" : "NO")<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}