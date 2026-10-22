#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    FastCode

   int n , k; cin>>n>>k;

   vector<int> r(n);

   vector<int> sorted_r(n);
   
   for(int i =0  ; i< n ;i++)
   {
        cin>>r[i];
        sorted_r[i] = r[i];
    }


   sort(sorted_r.begin() , sorted_r.end());

   vector<int> ans(n);

   for(int i =0  ;i< n; i++)
   {
        ans[i] = lower_bound(sorted_r.begin() , sorted_r.end() , r[i])-sorted_r.begin();
   }

   for(int i =0 ; i < k ; i++)
   {
        int x , y;  cin>>x>>y;

        --x;--y;
        if(r[x] > r[y])
        {
            ans[x]--;
        }else if(r[x] < r[y])
        {
            ans[y]--;
        }
    }
   

    for(int i =0 ; i< n ;i++)
    {
        cout<<ans[i]<<" ";
    }
   
   
   
   
   
   return 0;
}