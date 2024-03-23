#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,s; cin>>n>>s;
    ll sum = 0, l = 0, r = 0, cnt = 0;

    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    while(r < n)
    {
        sum += v[r];
        while(sum >= s) sum -= v[l++];

        cnt += l;
        r++;
    }

    cout<<cnt<<endl;
    return 0;
}
