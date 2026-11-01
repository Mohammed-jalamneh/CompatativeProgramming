#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<ll> Divi (int n)
{
    vector<ll> div;

    for(int i=1 ; i*i<=n ; i++)
    {
        if(n % i == 0 )
        {
                div.push_back(i);
                div.push_back(n/i);
        }
    }

    return div;
}

int main() {
    FastCode

    int n; cin>>n;1
    vector<ll> Div = Divi(n);
   
    if(Div.size()>2) cout<<"NO";
    else if(Div.size() == 2) cout<<"YES";
    
    
    return 0;
}