/*
Website: UVa Online Judge
Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=307
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define all(x) x.begin(), x.end();
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))
#define MSOne(S) (1ull << (63 - __builtin_clz(S)))

void solve() {
    ll l, h, max;
    while (scanf("%lld %lld", &l, &h) == 2)
    {
        if (l > h) swap(l, h);
        if (l == 0 && h == 0) break;

        pair<ll, ll> max = { -1, -1 };
        for (ll i = l; i <= h; i++) {
            ll tmp = 0, j = i;
            while (true) {
                if (j & 1) j = 3 * j + 1;
                else j >>= 1;
                tmp++;
                if (j == 1) break;
            }

            if (tmp > max.second) max = make_pair(i, tmp);
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", l, h, max.first, max.second);
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