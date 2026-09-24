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
    file_io();

   int t; cin>>t;

   while(t--)
   {
        int n ,q; cin>>n>>q;

        vector<vector<long long>> pref(1005, vector<long long>(1005, 0));

        for (int i = 0; i < n; i++)
        {
            int h , w;cin>>h>>w;
            pref[h][w]+=(ll) h *w;
        }

        for (int i = 1; i <= 1000; i++) {
         for (int j = 1; j <= 1000; j++) {
            pref[i][j]+=pref[i-1][j];
            }
        }

        for (int i = 1; i <= 1000; i++) {
         for (int j = 1; j <= 1000; j++) {
            pref[i][j]+=pref[i][j-1];
            }
        }

        while(q--)
        {
            int h1,w1,h2,w2;cin>>h1>>w1>>h2>>w2;
            int l1 = h1+1;
            int r1 = w1+1;
            
            int l2 = h2-1;
            int r2 = w2-1;


            cout<<pref[l2][r2] - pref[l2][r1-1]-pref[l1-1][r2]+pref[l1-1][r1-1]<<"\n";
        }


   }

  
    return 0;
}