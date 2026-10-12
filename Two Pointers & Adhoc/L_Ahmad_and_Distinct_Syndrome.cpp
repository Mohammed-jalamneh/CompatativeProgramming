#include <bits/stdc++.h>
#include <cmath>
#include <functional>

using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Solve()
{
     int n; 
    cin >> n;

    vector<ll> s(n);

    for(int i=0 ;i<n ;i++) cin>>s[i];

    set<ll> se(s.begin(), s.end());
    ll TypesSize = se.size();

        vector<ll> freq(n+1, 0);
        int CurrentSize = 0;
        int l = 0;
        int minNum = n;
   
    for( int r =0 ; r<n ; r++)
    {
        freq[s[r]]++;

        if(freq[s[r]] ==1)
        CurrentSize++;

        while(l<r && freq[s[l]]>1 && CurrentSize == TypesSize)
        {
            freq[s[l]]--;
            l++;
        }

        if(CurrentSize == TypesSize)
        minNum = min(minNum , r-l+1);

    }

    cout<<minNum<<"\n";
}

int main() {

    FastCode;

   int t; cin>>t;

   while(t--)
   {
    Solve();
   }
    return 0;
}