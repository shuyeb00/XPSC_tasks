#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    int cnt = 0;
    vector<int>ans;

    for(int i=1; i<n-1; ++i){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            cnt++;
            if(cnt == 1){
                ans.push_back(i);
                ans.push_back(i+1);
                ans.push_back(i+2);
            }
        }
    }

    if(cnt == 0){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    for(auto u : ans) cout<<u<<" ";
    cout<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}