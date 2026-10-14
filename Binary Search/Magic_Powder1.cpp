#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n,k;


bool can (ll mid , vector<int> &have , vector<int> &need)
{
    ll powderMagicNeed =0;

    for(int i =0 ; i<n ;i++)
    {
        if(have[i]>= 1LL * mid * need[i])
        continue;
        else
        {
            powderMagicNeed += (1LL * mid * need[i] - have[i]);
        }

        if(powderMagicNeed > k) return false;
    }

    return k >=powderMagicNeed;
}




int main() {
    FastCode

     cin>>n>>k;

    vector<int> have(n) , need(n);

    for(int i =0 ; i<n ; i++) cin>>need[i];
    for(int i =0 ; i<n ; i++) cin>>have[i];


    ll l =0 , r= 2e9 , mid=0 , ans=0;

    while(l <= r)
    {
        mid = l+(r-l) / 2;
    
        if(can(mid , have , need))
        {
            ans = mid;
            l = mid+1;
        }else
        {
            r=mid-1;
        }
    
    }

        cout<<ans<<"\n";




    return 0;
}