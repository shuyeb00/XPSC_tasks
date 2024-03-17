#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,m; cin>>n>>m;
    vector<ll>a(n),b(m);

    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;

    ll cnt = 0;
    int l=0,r=0;

    while(l<n and r<m)
    {
       int p1 = 0, p2 = 0, cur = a[l];

       while(a[l] == cur and l<n){
        p1++;
        l++;
       }

       while(cur > b[r] and r<m) r++;

       while(b[r] == cur and r<m){
        p2++;
        r++;
       }

       cnt += 1LL*p1*p2;
    }

    cout<<cnt<<endl;

    return 0;
}