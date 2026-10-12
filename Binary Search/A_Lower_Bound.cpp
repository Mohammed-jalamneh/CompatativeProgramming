#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

template <typename T>
using ordered_set = tree<
    T, 
    null_type, 
    less<T>, 
    rb_tree_tag, 
    tree_order_statistics_node_update
>;

int main() {
    FastCode

    int n, q; 
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    while (q--) {
        int x; 
        cin >> x;
        int ans = -1;
        int l = 0, r = n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (x <= v[mid]) {
                ans = mid + 1; // 1-based index
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}