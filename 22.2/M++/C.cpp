#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int64_t id, q;
    int T, N;
    cin >> T;

    unordered_map<int64_t, int64_t> ump;
    for (int i = 0; i < T; i++) {
        cin >> id >> q;
        ump[id] = q;
    }

    bool ans = true;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> id >> q;
        if (ump.find(id) != ump.end()) {
            ump[id] -= q;
            if (ump[id] < 0) {
                ans = false;
                break;
            }
        }
        else {
            ans = false;
            break;
        }
    }

    if (ans) cout << "Sim";
    else cout << "Nao";
    cout << "\n";

    return 0;
}