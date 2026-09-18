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


    string s; getline(cin, s);

    set<char> seso;

    for(int i=0; i<s.size(); i++){
        if(s[i] =='{' || s[i] =='}'|| s[i] ==',' || s[i] == ' ')
              continue;
        else
          seso.insert(s[i]);
    }

    cout<<seso.size()<<endl;

    return 0;
}