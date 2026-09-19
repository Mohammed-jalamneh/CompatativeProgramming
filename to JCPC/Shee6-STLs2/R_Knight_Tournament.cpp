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
    greater<T>, 
    rb_tree_tag, 
    tree_order_statistics_node_update
>;

void file_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main() {

    FastCode
   //file_io();

  int n, m;
    cin>>n>>m;

    set<int> alive;
    for (int i = 1; i <= n; i++) {
        alive.insert(i);
    }

    vector<int> ans(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int l, r, x;
        cin >> l >> r >> x;

        auto it = alive.lower_bound(l);
        vector<int> to_erase;

        while (it != alive.end() && *it <= r) {
            int knight = *it;
            if (knight != x) {
                ans[knight] = x;
                to_erase.push_back(knight);
            }
            it++;
        }

        for (int defeated : to_erase) {
            alive.erase(defeated);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}