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


     int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
       vector<string> v(n);
        set<string> st;

        for (int i = 0; i < n; i++) {
         cin >> v[i];
         st.insert(v[i]);
        }



        for (int i = 0; i < n; i++) {
            
            bool found = false;
        
        for (int j = 1; j < v[i].length(); j++) {

            string L = v[i].substr(0,j);
            string R = v[i].substr(j);

            if(st.count(L) && st.count(R))
            {
                found = true;
                break;
            }

        }
             if(found) cout<<"1";
            else cout<<"0";
        }
        cout<<"\n";

        
    }
    return 0;
}