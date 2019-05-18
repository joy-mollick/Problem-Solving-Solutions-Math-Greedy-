/*
nayeemjoy59 1 minute ago

U have to place the numbers from two array in the (n+m) positions . So , first number of ways to put the numbers of first array into the (n+m) positions is (n+m)Cn .... and then only one way the numbers of second array can be put other positions among (n+m) positions where n places have been blocked ... So total way without changing order of two arrays (n+m)Cm * 1 ways = ((n+m)! / (n!)*(m!) )%mod

-> ((n+m)!%mod * ((n!*m!)^-1)%mod))%mod.

Find the mod Inverse of (n!*m!) then multiply it with (n+m)! 

*/


#include<bits/stdc++.h>

using namespace std;

const long mod=1000000007;

long factorial[201]={1};

void precalculate()
{
    long fact=1;
    for(int i=1;i<=200;i++)
    {
        fact=(fact*i)%mod;
        factorial[i]=fact;
    }
}

long egcd(long a,long b,long *x,long *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    long x1,y1;
    long gcd=egcd(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return gcd;
}

long  modInverse(long a,long m)
{
    long x,y;
    long g=egcd(a,mod,&x,&y);
    long ans=(x%mod+mod)%mod;
    return ans;
}

int main()

{
   precalculate();
   int T;
   cin>>T;
   int n,m;
   while(T--)
   {
       cin>>n>>m;
       long upore=(factorial[n+m])%mod;
       long niche =((factorial[n]*factorial[m])%mod);
       long ans=modInverse(niche,mod);
       long res=(ans*upore)%mod;
       cout<<res<<endl;
   }
}
