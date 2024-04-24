#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    vector<int>v(n),pre(n);
    for(auto &x : v) cin>>x;

    pre[0] = v[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1]+v[i];

    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        cout<<lower_bound(pre.begin(),pre.end(),x) - pre.begin() + 1<<endl;
    }


    return 0;
}