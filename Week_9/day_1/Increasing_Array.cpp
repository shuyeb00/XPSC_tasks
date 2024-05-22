#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    ll cnt = 0;
    for(int i=1; i<n; i++){
        if(v[i] < v[i-1]){
            cnt += v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }

    cout<<cnt<<endl;

    return 0;
}