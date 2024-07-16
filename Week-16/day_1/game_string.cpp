#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
     string s;
     cin >> s;

     int cnt = 0;
     stack<char>st;

     for (int i = 0; i < s.size(); i++) {
     	if (!st.empty() and st.top() == s[i]) {
     		cnt++;
     		st.pop();
     	} else {
     		st.push(s[i]);
     	}
     }

     cout << (cnt & 1 ? "Yes" : "No") << '\n';
    
}

int32_t main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--) {
    	solve();
    }

    return 0;

}
