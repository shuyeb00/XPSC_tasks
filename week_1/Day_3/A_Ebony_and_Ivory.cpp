#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int a,b,c;
    cin>>a>>b>>c;

    if(c%a == 0 || c%b == 0 || a+b == c) cout<<"Yes"<<endl;
    else{
        for(int i=0; i<=c; i += a){
            for(int k=0; k<=c; k += b){
                if(k+i == c) {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
        cout<<"No"<<endl;
    }

    return 0;
}