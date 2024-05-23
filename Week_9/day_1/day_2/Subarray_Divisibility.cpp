#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    ll sum = 0, cnt = 0;
    map<ll,ll>mp;
    mp[0]++;

    for(auto u : v)
    {
        sum += u%n;
        sum = (sum+n)%n;
        cnt += mp[sum];
        mp[sum]++;
    }

    cout<<cnt<<endl;

    return 0;
}