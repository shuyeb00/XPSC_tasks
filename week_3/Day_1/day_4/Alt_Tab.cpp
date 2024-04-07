#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    deque<string>dq;
    map<string,int>mp;

    int tmp = n;
    while(n--)
    {
        string s; cin>>s;
        mp[s]++;

        if(mp[s]>1)
        {
            auto it = find(dq.begin(),dq.end(),s);
            dq.erase(it);
            dq.push_front(s);
            mp[s]--;
        }
        else dq.push_front(s);
    }

    for(auto u : dq)
    {
        cout<<u[u.size()-2]<<u[u.size()-1];
    }
    cout<<endl;

    return 0;
}