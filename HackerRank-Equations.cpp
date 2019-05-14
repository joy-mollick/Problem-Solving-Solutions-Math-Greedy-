#include <bits/stdc++.h>

using namespace std;


typedef unsigned long long int ll;

const ll mod=1000007;

bool isPrime(ll p)
{
    bool num = false;
	if(p==2||p==3)
	return true;

	for(ll i=2;i<=sqrt(p);++i)
	{
		if(p%i==0)
            {
            num = false;
            break;
        }
        else
            num = true;

	}
	return num;
}
ll factors(ll n)
{
   ll ans=1;
   for(ll i=2;i<=n;i++)
   {
       if(isPrime(i))
       {
           ll po=1;
           ll count=0;
           while(pow(i,po)<=n)
           {
               count=count+(n/pow(i,po));
               po++;
           }
           ans=(ans*(2*count+1))%mod;
       }
   }
   return ans%mod;
}



int main()
{
    ll n;
    cin>>n;
    cout<<(factors(n)%mod)<<endl;
}
