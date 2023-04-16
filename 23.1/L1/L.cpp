/*
Website: Codeforces
Link: https://codeforces.com/problemset/problem/486/A
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

auto solve() {
    ll n;
    cin >> n;

    if (not (n % 2)) cout << n / 2;
    else cout << (n + 1) / -2;
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
