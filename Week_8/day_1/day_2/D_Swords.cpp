#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n; cin>>n;
    vector<ll>v(n);

    ll sum = 0;
    for(auto &x : v){
        cin>>x;
        sum += x;
    }

    ll mx = *max_element(v.begin(),v.end());
    vector<ll>t;

    for(auto u : v) t.push_back(mx-u);

    if(t.size() == 1)
    {
        cout<<1<<" "<<t[0]<<endl;
        return 0;
    }

    ll z = t[0];
    for(int i=1; i<t.size(); i++) z = __gcd(t[i],z);

    ll y = 0;
    for(auto u : t) y += u/z;

    cout<<y<<" "<<z<<endl;


    return 0;
}