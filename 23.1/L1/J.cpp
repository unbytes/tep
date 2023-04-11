/*
Website: Kattis
Link: https://open.kattis.com/problems/cd
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define all(x) x.begin(), x.end()
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))

void solve(int n, int m) {
    int a, ans = 0;

    unordered_set<ll> st;
    for (int i = 0; i < n; i++) {
        cin >> a;
        st.insert(a);
    }
    for (int i = 0; i < m; i++) {
        cin >> a;
        if (st.find(a) != st.end()) ans++;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    //cin >> t;

    while (t--) {
        int n, m;
        while (true) {
            cin >> n >> m;
            if ((n == 0) and (m == 0)) break;
            solve(n, m);
        }
    }

    return 0;
}
