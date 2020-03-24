#include<bits/stdc++.h>

using namespace std;

/// combinatorics problem
/// counting problem

typedef unsigned long long ll;

ll mod=998244353;

ll po(ll a,ll b)
{
    ll ans=1ll;
    while(b)
    {
        if(b&1ll) ans=(ans*a)%mod;

        a=(a*a)%mod;
        b=b>>1ll;
    }
    return (ans%mod);
}

int main()

{
   ll n;
   cin>>n;
   ll n_mber_of_ways_of_lngth_i;
   for(int i=1;i<=n;i++)
   {
       if(i==n)
       {
           n_mber_of_ways_of_lngth_i=10;/// there can be total 10 ways (10 digits)
       }
       else if(i==n-1)
       {
           n_mber_of_ways_of_lngth_i=9*2*10;///when length is n-1,then there will be first position border and  position n border and border can be 9 different kind and numbers of the n-1 length block can be different 10 types
       }
       else
       {
    n_mber_of_ways_of_lngth_i=((9*2*10*po(10,n-i-1))%mod + (9*9*10*po(10,n-i-2)*(n-i-1))%mod)%mod;/// first part when block position start at 1 and ends at n ,then last part is when it starts at middle position then block of two sides can be 9*9 different types and block can be 10 different types and block can slide into 1 to n position by (n-i-1)
       }
       cout<<(n_mber_of_ways_of_lngth_i%mod)<<" ";
   }
   return 0;
}
