#include <iostream>

using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll n, k, target_sum;

bool can(ll mid) {
    return (n * mid) >= target_sum;
}

void solve() {
    cin >> n >> k;

   
    target_sum = ((n + k - 1) / k) * k;

    ll l = 1, r = target_sum, ans = target_sum;

    while (l <= r) {
        ll mid = l + (r - l) / 2;

        if (can(mid)) {
            ans = mid;     
            r = mid - 1;
        } else {
            l = mid + 1;   
        }
    }

    cout << ans << "\n";
}

int main() {
    FastCode

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}