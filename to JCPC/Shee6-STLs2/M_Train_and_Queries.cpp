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

   map<int, pair<int, int>> mp;

   int t; cin>>t;   

   while(t--)
   {
    

    int n , k; cin>>n>>k;

    
    for(int i=1 ; i<=n;i++)
    {
        int num; cin>>num;

       if(mp[num].first == 0)
       {
         mp[num].first = i;
       }
       mp[num].second = i;
    }

    while(k--)
    {
        int num1 , num2; cin>>num1>>num2;

        if(mp.find(num1) != mp.end() && mp.find(num2) != mp.end()   )
        {
          if(mp[num1].first < mp[num2].second)
          {
            cout<<"YES\n";
          }
          else
          {
            cout<<"NO\n";
          }
        }else
        {
            cout<<"NO\n";
        }
       


    }
    mp.clear();

   }


   



    return 0;
}