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

bool isSuffix(const string& a, const string& b) {
    if (a.length() > b.length()) return false;
    return b.substr(b.length() - a.length()) == a;
}


int main() {

    FastCode
    //file_io();

    int n;
    cin>>n;

    map<string, set<string>> mp;

    while (n--) {
        string name;
        int k;
        cin >> name >> k;
        for (int i = 0; i < k; i++) {
            string phone;
            cin >> phone;
            mp[name].insert(phone);
        }
    }

    cout << mp.size() << "\n";

    for (auto& entry : mp) {
        const string& name = entry.first;
        const set<string>& phones = entry.second;

        vector<string> valid_phones;

        for (const string& a : phones) {
            bool is_redundant = false;
            for (const string& b : phones) {
                if (a != b && isSuffix(a, b)) {
                    is_redundant = true;
                    break;
                }
            }
            if (!is_redundant) {
                valid_phones.push_back(a);
            }
        }

        cout << name << " " << valid_phones.size();
        for (const string& p : valid_phones) {
            cout << " " << p;
        }
        cout << "\n";
    }

    return 0;
}