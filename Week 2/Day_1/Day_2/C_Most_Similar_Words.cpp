#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int diff(string a, string b)
{
    ll sum = 0;
    for(int i=0; i<a.size(); i++)
    {
        sum += abs(a[i] - b[i]);
    }
    return sum;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>v;

        for(int i=0; i<n; i++)
        {
            string s; cin>>s;
            v.push_back(s);
        }

        int ans = 1e9;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                ans = min(ans,diff(v[i],v[j]));
            }
        }

        cout<<ans<<endl;
        
    }

    return 0;
}