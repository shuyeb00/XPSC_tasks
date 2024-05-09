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
        string s; cin>>s;
        vector<char>v;

        int cap = 0, small = 0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == 'B') cap++;
            else if(s[i] == 'b') small++;
            else if(s[i] >= 'A' and s[i] <= 'Z')
            {
                if(cap) cap--;
                else v.push_back(s[i]);
            }
            else if(s[i] >= 'a' and s[i] <= 'z')
            {
                if(small) small--;
                else v.push_back(s[i]);
            }
        }
        
        reverse(v.begin(),v.end());
        for(auto u : v) cout<<u;
        cout<<endl;
    }

    return 0;
}