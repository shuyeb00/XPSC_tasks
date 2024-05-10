#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,k; cin>>n>>k;
    vector<int>v(n),pos,neg;
    for(auto &x : v) cin>>x;
    
    for(auto u : v){
        if(u >= 0) pos.push_back(u);
        else neg.push_back(abs(u));
    }


    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());

    ll psum = 0, nsum = 0, ans = 0;

    for(int i=pos.size()-1; i>=0; i -= k){
        psum += pos[i];
    }
    for(int i=neg.size()-1; i>=0; i -= k){
        nsum += neg[i];
    }

    if(pos.size()>0 and neg.size()>0) ans = 2*(psum+nsum) - max(pos.back(),neg.back());
    else if(pos.size() == 0) ans = 2*nsum - neg.back();
    else ans = 2*psum - pos.back();

    cout<<ans<<endl; 

}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}