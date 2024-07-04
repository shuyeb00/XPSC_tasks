#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n; 
    cin >> n;

    string s; 
    cin >> s;

    if (n == 2) {
        if (s[0] == '0') cout << s.back() << "\n";
        else cout << s << "\n";
        return;
    }

    int ans = 1e9;
    for (int i = 0; i < n-1; i++) {
        int sum = 0; 
        int x = stoi(s.substr(i,2));
        sum += (x > 1 ? x : 0);

        for (int j = 0; j < n; j++) {
            if (j != i and j != i+1) {
            int num = s[j] - '0';
    
            if (num == 0) {
                cout << 0 << "\n";
                return;
            }
            if (num > 1) sum += num;
            }
        }
        
        ans = (sum > 0 ? min(ans, sum) : min(ans, 1));
    }

    cout << ans << "\n";

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--) {
        solve();
    }

    return 0;

}
