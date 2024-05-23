#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,x; cin>>n>>x;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    int l = 0, r = 0, cnt = 0, sum = 0;
    while(l<n && r<n)
    {
        sum += v[r];
        while(sum >= x)
        {
            if(sum == x) cnt++;
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout<<cnt<<endl;

    return 0;
}