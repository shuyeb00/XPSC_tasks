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
        string s,t; cin>>s>>t;
        char a = s[s.size()-1];
        char b = t[t.size()-1];
        // cout<<a<<" "<<b<<endl;

        if(s == t) cout<<"="<<endl;
        else if(a == b)
        {
            if(a == 'S') cout<<(s.size()>t.size() ? "<" : ">")<<endl;
            else cout<<(s.size()>t.size() ? ">" : "<")<<endl;
        }
        else cout<<(a>b ? "<" : ">")<<endl;
    }

    return 0;
}