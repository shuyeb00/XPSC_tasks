#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    string t,p; cin>>t>>p;
    int n = t.size();
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    auto ok = [&](int m)
    {
        multiset<int>ml;
        string s = "";

        for(int i=0; i<=m; i++) ml.insert(v[i]);
        for(int i=0; i<t.size(); i++){
            if(ml.find(i+1) == ml.end()) s.push_back(t[i]);
        }

        int j = 0;
        for(int i=0; i<s.size() && j<p.size(); i++)
        {
            if(s[i] == p[j]) j++;
        }

        return j == p.size();

    };

    int l = 0, r = n-1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;

        if(ok(mid)) l = mid+1;
        else r = mid-1;
    }

    cout<<l<<endl;

    vector<tuple<int,int,int>>v;
    v.push_back(make_tuple(2,3,4));

    return 0;
}