#include <bits/stdc++.h>
using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 


int main() {
    FastCode;

    int n; cin>>n;

    vector<int> arr(n+1,0);

    for (int i = 2; i <= n ; i++)
    {
        if(arr[i] == 0)
        {
            for (int j = i+i; j <= n; j+=i)
            {
                arr[j]++;
            }
            
        }
    }

    int ans =0;

    for (int i = 2; i <=n; i++)
    {
        if(arr[i] ==2)
        ans++;
    }
    
    cout<<ans<<"\n";
    
  

    return 0;
}