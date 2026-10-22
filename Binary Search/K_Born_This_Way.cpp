#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    FastCode

    ll n, m, Ta, Tb, k;
    if (!(cin >> n >> m >> Ta >> Tb >> k)) return 0;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    if (k >= n || k >= m) {
        cout << -1 << "\n";
        return 0;
    }

    ll max_arrival_time = -1;

    for (int i = 0; i <= k; i++) {
        ll arrive_B = a[i] + Ta;

        auto it = lower_bound(b.begin(), b.end(), arrive_B);
        int idx = it - b.begin();

        int final_idx = idx + (k - i);

        if (final_idx >= m) {
            cout << -1 << "\n";
            return 0;
        }

        ll arrival_C = b[final_idx] + Tb;
        max_arrival_time = max(max_arrival_time, arrival_C);
    }

    cout << max_arrival_time << "\n";

    return 0;
}