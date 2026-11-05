#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




int main() {
    FastCode


   int n; cin>>n;
    for (int a = (n-1)/2 , b ; a >=1; a--)
    {
     b=n-a;

     if(gcd(a,b)==1) 
     {
        cout<<a<<" "<<b<<"\n";
        break;
     }
        
    }
    

    
    return 0;
}