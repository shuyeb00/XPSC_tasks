#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int>pd;
void isPalindrome()
{
    for(int i=0; i<(1<<15); i++)
    {
        string s = to_string(i);
        bool ok = true;
        for(int k=0; k<s.size()/2; k++)
        {
            if(s[k] != s[s.size()-k-1]){
                ok = false;
                break;
            }
        }
        if(ok) pd.push_back(i);
    }
}

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    vector<int>f(1<<15);

    for(auto &x : v)
    {
        cin>>x;
        // mp[x]++;
        f[x]++;
    }

    ll cnt = n;
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<pd.size(); k++)
        {
            int x = v[i]^pd[k];
            // cnt += mp[x];
            cnt += f[x];
        }
    }
    cout<<cnt/2<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    isPalindrome();

    while(tc--) solve();

    return 0;
}