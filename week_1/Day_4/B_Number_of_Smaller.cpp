#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);

    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;

    int l=0,r=0;

    int cnt = 0;
    while(r<m)
    {
        while(a[l] < b[r] and l<n){
            cnt++;
            l++;
        }
        cout<<cnt<<" ";
        r++;
    }

    return 0;
}