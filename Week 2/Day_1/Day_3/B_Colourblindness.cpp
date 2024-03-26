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
        string s,t; cin>>s>>t;

        bool flag = false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != t[i] and (s[i] == 'R' or t[i] == 'R')) flag = true;
        }

        cout<<(flag ? "NO" : "YES")<<endl;
    }

    return 0;
}