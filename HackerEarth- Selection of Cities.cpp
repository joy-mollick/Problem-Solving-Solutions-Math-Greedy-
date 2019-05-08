#include<bits/stdc++.h>

using namespace std;

// The number of ways , u have to choose cities at least one city so, obviously 2^n-1

#define max 1000000007

typedef unsigned long long int ll;

#define mod 1000000007

ll powg(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
         ans=((ans%mod)*(a%mod))%mod;

        a=((a%mod)*(a%mod))%mod;
        b=b/2;

        //cout<<ans<<endl;
    }
    return ans%mod;
}

int main()

{
   ll t,n;
   scanf("%llu",&t);
   while(t--)
   {
       scanf("%llu",&n);
       printf("%llu\n",powg(2,n)-1);
   }
   return 0;
}
