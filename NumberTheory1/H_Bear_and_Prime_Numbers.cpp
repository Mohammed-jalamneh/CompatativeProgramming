#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 1e7;
int cnt[MAX + 1];
long long f[MAX + 1];
long long pref[MAX + 1];
bool is_composite[MAX + 1];

void compute_sieve_and_factors() {
    for (int i = 2; i <= MAX; i++) {
        if (!is_composite[i]) {
            for (int j = i; j <= MAX; j += i) {
                is_composite[j] = true;
                f[i] += cnt[j];
            }
        }
    }

    for (int i = 2; i <= MAX; i++) {
        pref[i] = pref[i - 1] + f[i];
    }
}

int main() {
    FastCode;

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    compute_sieve_and_factors();

    int q;
    cin >> q;
    while (q--) {
        long long l, r;
        cin >> l >> r;

        if (l > MAX) {
            cout << 0 << "\n";
            continue;
        }

        r = min(r, (long long)MAX);
        cout << pref[r] - pref[l - 1] << "\n";
    }

    return 0;
}