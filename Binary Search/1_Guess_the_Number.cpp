#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    FastCode

    int l =1 , r =1e6 , mid , ans;

    while(l<=r)
    {
        mid = l+(r-l) /2;
        cout<<mid<<endl;

        string resp ; cin>>resp;

        if(resp == ">=")
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r= mid-1;
        }
    }

    cout<<"! "<<ans;


    
    return 0;
}