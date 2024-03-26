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
        int n,k; cin>>n>>k;
        string s; cin>>s;
        map<char,int>mp;

        for(auto u : s) mp[u]++;
        int cnt = 0;

        for(auto u : mp) if(u.second & 1) cnt++;
        
        cout<<(cnt > k+1 ? "NO" : "YES")<<endl;
    }

    return 0;
}