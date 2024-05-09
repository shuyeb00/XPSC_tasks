#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    string s = "";

    bool f1 = true;
    for(int i=0; i<n; i+=2){
        if(f1){
            s += "aa";
            f1 = false;
        }
        else{
            s += "bb";
            f1 = true;
        }
    }

    for(int i=0; i<n; i++) cout<<s[i];
    cout<<endl;

    return 0;
}