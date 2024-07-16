#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPalindrome(vector<int> &v) {
	int i = 0, j = v.size() - 1;

	while (i < j) {
		if (v[i] != v[j]) {
			return false;
		}
		i++, j--;
	}
	return true;
}

void solve() {
     
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    if (isPalindrome(v)) {
    	cout << "YES" << '\n';
    	return;
    }

    int a = 0, b = 0;
    int i = 0, j = v.size() - 1;

    while (i < j) {
    	if (v[i] != v[j]) {
    		a = v[i], b = v[j];
    		break;
    	}
    	i++, j--;
    }

    vector<int> s1, s2;
    for (auto u : v) {
    	if (u != a) s1.push_back(u);
    	if (u != b) s2.push_back(u);
    }

    cout << (isPalindrome(s1) or isPalindrome(s2) ? "YES" : "NO") << '\n';
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
