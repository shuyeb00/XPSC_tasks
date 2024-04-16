#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,m,k; cin>>n>>m>>k;
    vector<int>v(m+1);
    for(auto &x : v) cin>>x;

    vector<vector<int>> mask;
    for(int i=0; i<=m; i++)
    {
        vector<int>tmp;
        for(int j=0; j<n; j++)
        {
            if((v[i]>>j) & 1) tmp.push_back(1);
            else tmp.push_back(0);
        }
        mask.push_back(tmp);
    }

    vector<int>fedor = mask[m];
    int ans = 0;
    for(int i=0; i<mask.size()-1; i++)
    {
        int cnt = 0;
        vector<int> tmp = mask[i];
        for(int j=0; j<n; j++)
        {
            if(tmp[j] != fedor[j]) cnt++;
        }

        if(cnt <= k) ans++;
    }

    cout<<ans<<endl;

    return 0;
}