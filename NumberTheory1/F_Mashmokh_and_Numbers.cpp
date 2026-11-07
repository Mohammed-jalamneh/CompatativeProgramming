#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




int main() {
    FastCode

    int n , k; cin>>n>>k;

    vector<int> elements;

    int points=0;
    int pairs = n/2;

    if(k<pairs){
        cout<<-1<<"\n";
        return 0;
        }

    if (n == 1) {
        if (k == 0) cout << 1 << "\n";
        else cout << -1 << "\n";
        return 0;
    }
    
    int x = k -(pairs-1);

    elements.push_back(x);
    elements.push_back(x*2);

    int current = x*2+1;

    for (int i = 0; i < pairs-1; i++)
    {
        elements.push_back(current);
        elements.push_back(current+1);

        current+=2;
    }

    if(n%2 != 0) elements.push_back(current);
    

    for (int i = 0; i < elements.size(); i++)
    {
        cout<<elements[i]<<" ";
    }
    



    
    return 0;
}