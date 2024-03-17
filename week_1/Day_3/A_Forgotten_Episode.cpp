#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    vector<int>v(n-1);
    for(auto &x : v) cin>>x;

    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i] != i+1)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

    // for(auto u : v) cout<<u<<" ";

    return 0;
}