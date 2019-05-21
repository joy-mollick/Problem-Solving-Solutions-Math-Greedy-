#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
    int l,b;
    cin>>l>>b;
    int gcd=__gcd(l,b);
    int ans=(l/gcd)*(b/gcd);
    cout<<ans<<endl;
    }
}
