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
        string s; cin>>s;

        string t = "Timur";
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());

        cout<<(s==t ? "YES" : "NO")<<endl;
    }

    return 0;
}