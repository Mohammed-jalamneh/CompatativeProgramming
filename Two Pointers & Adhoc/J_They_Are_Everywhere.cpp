#include <bits/stdc++.h>
#include <cmath>
#include <functional>

using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {

    FastCode;

    int n; 
    cin >> n;
    string s; 
    cin >> s;

    set<char> se(s.begin(), s.end());
    int TypesSize = se.size();

        vector<int> freq(256, 0);
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

    cout<<minNum;
    return 0;
}