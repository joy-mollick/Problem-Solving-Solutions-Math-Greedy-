#include<bits/stdc++.h>

using namespace std;

// The number of ways , u have to choose cities at least one city so, obviously 2^n-1

#define max 1000000007

typedef unsigned long long int ll;

#define mod 1000000007

bool prime[1000001];

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
int main()

{
    prime_sieve();
   int t,n;
   scanf("%d",&t);
   vector<int>v;
   while(t--)
   {
       scanf("%d",&n);
       if(prime[n])
       {
           v.push_back(n);
       }
   }
   if(v.empty())
   {
       printf("-1\n");
   }
   else{
   sort(v.begin(),v.end());
   printf("%d\n",v[v.size()-1]-v[0]);}
   return 0;
}
