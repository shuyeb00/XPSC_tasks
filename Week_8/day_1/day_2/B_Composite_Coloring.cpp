#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n),color(n,-1);
    for(auto &x : v) cin>>x;

    vector<int>prime;
    for(int i=2; i*i<=1000; i++)
    {
        bool ok = true;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j == 0)
            {
                ok = false;
                break;
            }
        }
        
        if(ok) prime.push_back(i);
    }

    int m = 1;
    for(auto u : prime)
    {
        bool cng = false;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]%u == 0 && color[i] == -1){
                color[i] = m;
                cng = true;
            }
        }
        if(cng) m++;
    }

    set<int>st;
    for(auto u : color) st.insert(u);

    cout<<st.size()<<endl;
    for(int i=0; i<n; i++) cout<<color[i]<<" ";
    cout<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}