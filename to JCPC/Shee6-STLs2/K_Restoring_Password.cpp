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

   map<int , string> mp;

   string s;getline(cin, s);

   for(int i =0 ;i<10 ; i++)
   {
        string s; getline(cin, s);

        mp[i] = s;
   } 

   short FirstLetter =0;
   for(int i =0 ;i<=8 ; i++)
   {
    for(int j =0 ; j<=9 ; j++)
    {
        if(s.substr(FirstLetter, 10) == mp[j])
        {
            cout<<j;
            break;
        }
    }
    
    FirstLetter = FirstLetter +10;        
    }


    return 0;
}