#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll n, S;
vector<ll> a;

ll get_cost(ll k) {
    if (k == 0) return 0;

    vector<ll> current_cost(n);
    for (ll i = 0; i < n; i++) {
        current_cost[i] = a[i] + (i + 1) * k;
    }

    sort(current_cost.begin(), current_cost.end());

    ll total = 0;
    for (int i = 0; i < k; i++) {
        total += current_cost[i];
    }

    if (total <= S) return total;
    return -1;
}

int main() {
    FastCode

    if (!(cin >> n >> S)) return 0;

    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll l = 0, r = n;
    ll best_k = 0, min_total_cost = 0;

    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll required_cost = get_cost(mid);

        if (required_cost != -1) {
            best_k = mid;
            min_total_cost = required_cost;
            l = mid + 1; 
        } else {
            r = mid - 1; 
        }
    }

    cout << best_k << " " << min_total_cost << "\n";

    return 0;
}