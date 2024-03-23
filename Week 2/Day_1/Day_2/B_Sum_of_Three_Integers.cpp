#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int k,s; cin>>k>>s;

    int cnt = 0;

    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            int z = s-i-j;
            if(z >= 0 and z <= k) cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
