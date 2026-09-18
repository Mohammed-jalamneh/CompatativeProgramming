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
   file_io();

   int n ; cin>>n;
   vector<int> a(n) , b(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<bool> Exited(n+1 , false);

    int ptr =0 ;
    int f =0;
    for(int i=0  ;i< n ; i++)
    {
        while(ptr < n && Exited[a[ptr]])
        {
            ptr++;
        }

        if(a[ptr] != b[i])
        {
            f++;
        }else
        {
            
            ptr++;
        }

        Exited[b[i]] = true;
        
    }


    cout << f << "\n";



    return 0;
}