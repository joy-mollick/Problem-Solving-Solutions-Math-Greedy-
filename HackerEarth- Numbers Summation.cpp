#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;



typedef unsigned long long int ll;

#define mod 1000000007

int main()

{
    ll n,gc;
    scanf("%llu",&n);
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
       ll occurence=(n/i);
          occurence=((occurence*(occurence-1))>>1)+occurence;
          ll pro=(i*occurence)%mod;
          ans=(ans%mod)+(pro%mod);
    }
    printf("%llu\n",ans);
    return 0;
}
