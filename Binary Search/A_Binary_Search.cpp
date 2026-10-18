#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    FastCode

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    while (q--) {
        string type;
        pair<ll, ll> x;
        cin >> type >> x.first >> x.second;

        if (type == "lower") {
            auto it = lower_bound(a.begin(), a.end(), x);
            if (it == a.begin()) {
                cout << -1 << "\n";
            } else {
                --it;
                cout << (it - a.begin()) << "\n";
            }
        } 
        else if (type == "upper") {
            auto it = upper_bound(a.begin(), a.end(), x);
            if (it == a.end()) {
                cout << -1 << "\n";
            } else {
                cout << (it - a.begin()) << "\n";
            }
        } 
        else if (type == "find") {
            if (binary_search(a.begin(), a.end(), x)) {
                cout << "found\n";
            } else {
                cout << "not found\n";
            }
        }
    }

    return 0;
}