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
        vector<int>v(n);
        for(auto &x : v) cin>>x;

        vector<string>vs;
        for(int i=0; i<n; i++)
        {
            int t; cin>>t;
            string s; cin>>s;
            vs.push_back(s);
        }

        vector<int>ans;
    
        for(int i=0; i<n; i++)
        {
            for(auto u : vs[i])
            {
                if(u == 'D') 
                {
                    if(v[i] == 9) v[i] = 0;
                    else v[i]++;
                }
                else
                {
                    if(v[i] == 0) v[i] = 9;
                    else v[i]--;
                }
            }
            ans.push_back(v[i]);
        }

        for(auto u : ans) cout<<u<<" ";
        cout<<endl;
    }

    return 0;
}