#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int q; cin>>q;
    map<ll,ll>mp;

    while(q--)
    {
        ll l,r; cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }

    vector<ll>v;
    for(auto [x,y] : mp) v.push_back(y);

    for(int i=1; i<v.size(); ++i) v[i] = v[i-1]+v[i];

    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;

    // for(auto [x,y] : mp) cout<<y<<" ";
    // cout<<endl;

    for(auto u : v){
        if(u>2){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}