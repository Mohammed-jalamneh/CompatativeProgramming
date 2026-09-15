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

    
    int n;
    cin >> n;

    map<int, bool> on_table;
    int current_socks = 0;
    int max_socks = 0;

    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;

        if (on_table.find(x) == on_table.end()) {
            on_table[x] = true;
            current_socks++;
            max_socks = max(max_socks, current_socks);
        } else {
            on_table.erase(x);
            current_socks--;
        }
    }

    cout << max_socks << "\n";

    return 0;
}