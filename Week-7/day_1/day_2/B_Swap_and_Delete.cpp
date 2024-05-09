#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    string s; cin>>s;
    int n = s.size();
    
    int zero = 0, one = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1') one++;
        else zero++;
    }

    for(int i=0; i<n; i++)
    {
        if(s[i] == '1'){
            if(zero > 0) zero--;
            else break;
        }
        else{
            if(one > 0) one--;
            else break;
        }
    }
    cout<<zero+one<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}