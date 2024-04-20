#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int binary_search(vector<int>&v,int x)
{
    int l = 0, r = v.size()-1;
    int idx = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] <= x){
            idx = mid;
            l = mid+1;
        }
        else if(v[mid] > x) r = mid-1;
        else l = mid+1;
    }

    return idx < 0 ? 0 : idx+1;
}

int main()
{
    code();
    
    int n,q; cin>>n>>q;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    while(q--)
    {
        int x; cin>>x;
        cout<<(binary_search(v,x))<<endl;
    }

    return 0;
}