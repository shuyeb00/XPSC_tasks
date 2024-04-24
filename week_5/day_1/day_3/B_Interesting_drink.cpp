#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int exist(vector<int>&v, int x)
{
    int l = 0, h = v.size()-1, idx = -1;
    while(l<=h)
    {
        int mid = l + (h-l)/2;
        if(v[mid] <= x)
        {
            idx = mid;
            l = mid+1;
        }
        else h = mid-1;
    }
    
    return idx;
}

int main()
{
    code();
    
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    sort(v.begin(),v.end());
    int q; cin>>q;

    while(q--)
    {
        int x; cin>>x;
        
        cout<<upper_bound(v.begin(),v.end(),x) - v.begin()<<endl;
        // cout<<exist(v,x)-0+1<<endl;
    }

    return 0;
}