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

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0; i<n; i++) if(a[i] != b[i]) a[i] = a[i]+1;
    sort(a.begin(),a.end());

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