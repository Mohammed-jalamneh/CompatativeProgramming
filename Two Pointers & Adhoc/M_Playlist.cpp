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

void file_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}




int main() {

    FastCode
    //file_io();

    int n; cin>>n;

    vector<int> v(n);
    for(int i=0 ;i<n; i++) cin>>v[i];
    
    map<int,int>freq;

    int l=0,r=0;

    int maxsum=0;
    while(r<n)
    {
        freq[v[r]]++;
   
            while(freq[v[r]] > 1)
        {
            freq[v[l]]--;
            l++;
        }

        maxsum = max(maxsum , r-l+1);

        r++;
        
    }

    cout<<maxsum;
    return 0;
}