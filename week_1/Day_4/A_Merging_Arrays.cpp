#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,m; cin>>n>>m;
    vector<int>v;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<m; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    for(auto u : v) cout<<u<<" ";
    cout<<endl;

    return 0;
}