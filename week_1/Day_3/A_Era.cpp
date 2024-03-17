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
        int cnt = 0;
        int i=1;
        while(n--)
        {
            int x; cin>>x;
            cnt = max(cnt,x-i);
            i++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}