#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;
    
    multiset<ll>st;
    ll l=0,r=0,ans = 0;

    while(r<n)
    {
        st.insert(v[r]);

        ll mx = *st.rbegin();
        ll mn = *st.begin();

        if(mx-mn <= k)
        {
            ans += st.size();
        }
        else
        {
            while(l<r)
            {
                mx = *st.rbegin();
                mn = *st.begin();

                if(mx-mn <= k) break;
                
                st.erase(st.find(v[l]));
                l++;
            }
             mx = *st.rbegin(), mn = *st.begin();
             if(mx-mn <= k) ans += st.size();
        }
        r++;
    }

    cout<<ans<<endl;

    return 0;
}