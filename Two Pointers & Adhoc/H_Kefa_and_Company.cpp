#include <bits/stdc++.h>
#include <cmath>
#include <functional>

using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {

    FastCode;

    int n , d ; cin>>n>>d;

    vector<pair<int , int>> v(n);

    for(int i =0  ;i<n ;i++)
    {
        int x , y ; cin>>x>>y;
        v[i]={x,y};
    }

    sort(v.begin() ,v.end());

    int l=0  , r=0;

    ll sum = 0;
    ll ans=0 ;

    while(r<n)
    {
        sum+=v[r].second;

        while(v[r].first - v[l].first >= d)
        {
            sum-=v[l].second;
            l++;
        }

        ans = max(ans , sum);
        r++;
    }

    cout<<ans<<"\n";

    return 0;
}