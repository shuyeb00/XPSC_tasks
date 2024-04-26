#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int> v((n*(n-1))/2);
    for(auto &x : v) cin>>x;

    sort(v.begin(),v.end());
    int tt = n;
    for(int i=0; i<(n*(n-1))/2; i+=tt)
    {
        cout<<v[i]<<" ";
        tt--;
    }
    cout<<v.back()<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}