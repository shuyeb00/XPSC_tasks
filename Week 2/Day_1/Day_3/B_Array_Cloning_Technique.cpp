#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;

        for(auto &x : v){
            cin>>x;
            mp[x]++;
        }

        ll mx = -1;
        for(auto u : mp) mx = max(mx,u.second);

        int cnt = 0;
        while(mx < n)
        {
            int baki = n-mx;
            int add = mx;
            cnt++;

            cnt += min(add,baki);
            mx += min(add,baki);
        }
        cout<<cnt<<endl;
    }

    return 0;
}