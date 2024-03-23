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
        set<ll>st;
        for(auto &x : v){
            cin>>x;
            st.insert(x);
        }
        
        int ans = n-st.size();
        cout<<(ans&1 ? n-(ans+1) : n-ans)<<endl;
    }

    return 0;
}