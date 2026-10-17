#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll n , k; 

bool can(int mid)
{
    ll s=0;
    int elous = 0;
    
    while(pow(k,elous) <= mid )
    {
        s += (mid/pow(k,elous));
        elous++;
    }

    return s>=n;
}

int main() {
    FastCode

    cin>>n>>k;

    ll l =1 , r = n , mid , ans;

    while(l<=r)
    {
        mid = l+(r-l) / 2;

        if(can(mid))
        {
            ans =mid;
            r = mid-1;
        }else
        {
            l = mid+1;
        }

    }
    
    cout<<ans<<"\n";


    return 0;
}