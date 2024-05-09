#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int ans = 1e9;


    for(char i='a'; i<='z'; i++)
    {
        int cnt = 0, l = 0, r = n-1;
        bool check = true;
        while(l<=r)
        {
            if(s[l] != s[r])
            {
                if(s[l] == i) l++;
                else if(s[r] == i) r--;
                else {
                    check = false;
                    break;
                }
                cnt++;
            }
            else l++,r--;
        }
        if(check) ans = min(cnt,ans);
    }

    cout<<(ans == 1e9 ? -1 : ans)<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}