#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;
    sort(v.begin(),v.end());

    int q; cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;

        int first = lower_bound(v.begin(),v.end(),l) - v.begin();
        int last = upper_bound(v.begin(),v.end(),r) - v.begin();
        
        cout<<last-first<<" ";
    }

    return 0;
}