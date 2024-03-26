#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool check(vector<int>&v)
{
    int i = 0, j = v.size()-1;
    while(i<j)
    {
        if(v[i] != v[j]) return false;
        i++,j--;
    }
    return true;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for(auto &x : v) cin>>x;

        int i = 0, j = n-1;
        bool ok = true;
        int a,b;

        while(i<j)
        {
            if(v[i] != v[j])
            {
                a = v[i];
                b = v[j];
                ok = false;
                break;
            }
            i++,j--;
        }

        if(ok) cout<<"YES"<<endl;
        else
        {
            vector<int>v1,v2;
            for(auto u : v)
            {
                if(u != a) v1.push_back(u);
            }
            for(auto u : v)
            {
                if(u != b) v2.push_back(u);
            }

            if(check(v1) or check(v2)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }

    return 0;
}