#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    vector<ll>v(n);
    
    ll sum = 0;
    for(auto &x : v)
    {
        cin>>x;
        sum += x;
    }

    // sort(v.rbegin(),v.rend());
    vector<ll>nv;
    for(auto u : v)
    {
        if(u%2 == 0) nv.push_back(u);
    }

    for(auto u : v)
    {
        if(u & 1) nv.push_back(u);
    }

    

    while(sum & 1)
    {
        sum -= nv.back();
        nv.pop_back();
    }

    cout<<sum<<endl;
    

    return 0;
}