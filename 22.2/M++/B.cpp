#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    vector<int> ts = { 3, 5, 12 }, ans;
    for (auto v : ts) ans.push_back(T % v);

    cout << T << " horas de tratamento:" << "\n";
    if (!ans[0]) cout << "Troca do soro" << "\n";
    if (!ans[1]) cout << "Injecao de antibioticos" << "\n";
    if (!ans[2]) cout << "Reavaliacao" << "\n";

    bool all = true;
    for (auto v : ans) {
        if (!v) all = false;
    }
    if (all) cout << "Monitoramento dos sinais vitais" << "\n";

    return 0;
}
