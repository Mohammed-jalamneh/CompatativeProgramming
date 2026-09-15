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
   // file_io();

    map<int, int> mp;
     
    int n ; cin>>n;

    while(n--)
    {
        int price , quality; cin>>price>>quality;
        mp.emplace(price ,quality);
        
    }

    bool IsPoor = true;
    for(auto it = mp.begin(); it != mp.end(); ++it)
    {
        auto next_it = next(it);

       if((it->first< next_it->first)&&(it->second > next_it->second))
        {   
            IsPoor = false;
            break;
        }
    }

    cout<<(IsPoor ? "Poor Alex" : "Happy Alex")<<endl;



   

    return 0;
}