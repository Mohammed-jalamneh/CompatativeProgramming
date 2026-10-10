#include <bits/stdc++.h>
#include <functional>


using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main() {

    FastCode

    int n; cin>>n;
    vector<int> v(n);
    map<int,int> freq;

    for(int i=0 ; i<n ;i++)
    cin>>v[i]; 

    int l=0;
    while(l<n && freq[v[l]] == 0)
    {
        freq[v[l]]++;
        l++;
    }

    if(l == n)
    {
        cout<<0<<"\n";
        return 0;
    }


    int ans = n-1;
    int r =n -1;

    while(l>=0)
    {
        while (r >= l && freq[v[r]] == 0) {
            freq[v[r]]++;
            r--;
        }

       ans = min(ans , r-l+1);

        l--;
        freq[v[l]]--;

    }


    cout<<ans<<"\n";



    return 0;
}

