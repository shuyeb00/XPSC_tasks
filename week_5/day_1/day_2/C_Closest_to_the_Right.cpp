#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,q; cin>>n>>q;
    vector<int>v(n);
    for(auto &x : v) cin>>x;
    
    while(q--)
    {
        int x; cin>>x;
        int idx = n+1;
        int l = 0, r = n-1;
        
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(x <= v[mid]){
                idx = mid+1;
                r = mid-1;
            }
            else if(v[mid] > x) r = mid-1;
            else l = mid+1;
        }
        cout<<idx<<endl;

    }

    return 0;
}