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
