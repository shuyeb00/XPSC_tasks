#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,s; cin>>n>>s;
    vector<pair<ll,int>>vp;
    
    for(int i=1; i<=n; i++)
    {
        int x; cin>>x;
        vp.push_back({x,i});
    }

    sort(vp.begin(),vp.end());

    // for(auto [x,y] : vp) cout<<x<<" "<<y<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1, k=n-1; j<k; j++)
        {
            while(vp[i].first + vp[j].first + vp[k].first > s) k--;

            if(j<k and vp[i].first + vp[j].first + vp[k].first == s)
            {
                cout<<vp[i].second<<" "<<vp[j].second<<" "<<vp[k].second<<endl;
                return 0;
            }
        }
    }

    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}