#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define all(x) x.begin(), x.end()
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))
#define MSOne(S) (1ull << (63 - __builtin_clzll(S)))

auto solve() {
    ll n;
    cin >> n;

    vector<ll> xs(n);
    vin(xs);
    sort(all(xs));

    if (n == 1) cout << "-1\n";
    else if (n == 2) {
        ll dif = xs[1] - xs[0];
        if (dif == 0) {
            cout << "1\n";
            cout << xs[0] << "\n";
        }
        else if ((xs[1] - xs[0]) % 2 == 0) {
            cout << "3\n";
            cout << xs[0] - dif << " " << xs[0] + (dif / 2) << " " << xs[1] + dif << "\n";
        }
        else {
            cout << "2\n";
            cout << xs[0] - dif << " " << xs[1] + dif << "\n";
        }
    }
    else {
        bool tmp = false, ans = true;
        ll dif = min(xs[1] - xs[0], xs[2] - xs[1]), opt = 0;
        for (ll i = 1; i < n; i++) {
            if (xs[i] - xs[i - 1] != dif) {
                if ((xs[i] - xs[i - 1] == 2 * dif) and !tmp) {
                    tmp = true;
                    opt = xs[i - 1] + dif;
                }
                else {
                    ans = false;
                }
            }
        }

        if (!ans) cout << "0\n";
        else {
            if (dif == 0) {
                cout << "1\n";
                cout << xs[0] << "\n";
            }
            else if (!tmp) {
                cout << "2\n";
                cout << xs[0] - dif << " " << xs.back() + dif << "\n";
            }
            else {
                cout << "1\n";
                cout << opt << "\n";
            }
        }
    }
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