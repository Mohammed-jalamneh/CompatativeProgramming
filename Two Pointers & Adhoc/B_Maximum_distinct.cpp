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

template <typename T>
using ordered_set1 = tree<
    T, 
    null_type, 
    less<T>, 
    rb_tree_tag, 
    tree_order_statistics_node_update
>;


int main() {

    FastCode

  int n, k;
    if (!(cin >> n >> k)) return 0;

    string s;
    cin >> s;

    vector<int> freq(26, 0);
    int distinct = 0;
    int max_distinct = 0;

    for (int r = 0; r < n; r++) {

        if (freq[s[r] - 'a'] == 0) {
            distinct++;
        }
        freq[s[r] - 'a']++;

        if (r >= k) {
            freq[s[r - k] - 'a']--;
            if (freq[s[r - k] - 'a'] == 0) {
                distinct--;
            }
        }

        if (r >= k - 1) {
            max_distinct = max(max_distinct, distinct);
        }
    }

    cout << max_distinct << "\n";

    return 0;
}