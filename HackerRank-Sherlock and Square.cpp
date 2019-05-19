#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

const ll mod=1e9+7;

ll power(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        ans=(ans*a)%mod;

        a=(a*a)%mod;
        b=b>>1;
    }
    return ans;
}

int main()
{
   ll t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       ll res=(2+power(2,n+1))%mod;
       cout<<res<<endl;
   }

    return 0;
}
