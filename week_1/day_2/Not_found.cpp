#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    string s; cin>>s;
    string t = "abcdefghijklmnopqrstuvwxyz";
    map<char,int> mp;

    for(int i=0; i<t.size(); i++) mp[t[i]]++;
    for(int i=0; i<s.size(); i++) mp[s[i]]++;

    bool ok = true;
    for(auto u : mp)
    {
        if(u.second < 2)
        {
            cout<<u.first<<endl;
            ok = false;
            break;
        }
    }

    if(ok) cout<<"None"<<endl;



    return 0;
}
