#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,x; cin>>n>>x;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    ll cnt = 0, sum = 0;
    map<ll,ll>mp;
    mp[0]++;

    for(auto u : v)
    {
        sum += u;
        cnt += mp[sum-x];
        mp[sum]++;
    }

    cout<<cnt<<endl;

    return 0;
}