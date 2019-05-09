#include<bits/stdc++.h>

using namespace std;

// First find out the sieve of prime numbers and sieve the minimum prime factors of the numbers under 1000000 .Nothing Else 

#define max 1000000007

typedef unsigned long long int ll;

#define mod 1000000007

bool prime[1000001];
int prime_div[1000001];

void prime_sieve()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i<=sqrt(1000000);i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<=1000000;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    prime[2]=true;
    prime[1]=false;
}
void prime_div_min()
{
    memset(prime_div,0,sizeof(prime_div));
    for(int i=2;i<=1000000;i++)
    {
        if(prime[i])
        {
            for(int j=i;j<=1000000;j=j+i)
            {
                if(prime_div[j]==0){
                prime_div[j]=i;}
                //cout<<j<<" "<<prime_div[j]<<endl;
            }
        }
    }
}
int main()

{
    prime_sieve();
    prime_div_min();
   int t,n;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       printf("%d\n",n-prime_div[n]);
   }

   return 0;
}
