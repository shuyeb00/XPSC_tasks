#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    map<int,int>mp;
    vector<ll>v(n),tmp(n+1,0);

    for(auto &x : v){
        cin>>x;
        if(x <= n) mp[x]++;
    }

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j += i) tmp[j] += mp[i]; 
    }

    sort(tmp.begin(),tmp.end());
    cout<<tmp.back()<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}