/*

Let's take a look here ,

(1/x) + (1/y) =(1/n!) number of solutions

let's n! as p okk ? Now ..

(1/x) + (1/y) =(1/p)

(x+y)/(xy) = (1/p)

 px + py =xy

- px -py +xy=0

 p^2 - px -py +xy =p^2   [ adding p^2 both sides ]

 p(p-x) -y(p-x)=p^2

 (p-y) (p-x) =p^2

 Now , think (p-y) as A and (p-x) as B

 So ,   A*B = p^2 

 Now , if anybody asks u the number of solutions of this solution .
 Then It will make U common sense that the number of divisors will be unique solutins Because Look At this . Let's think p^2 =36

 So solutions are (value of A and B) 

 a * b

 1*36=36
 2*18=36
 3*12=36
 4*9=36
 6*6=36 


 a * b

 36*1=36
 18*2=36
 12*3=36
 9*4=36

 Total 9 unique solutions . 

 Now , put n! in p So , U have to find out the number of divisors of (n!)^2 . That's all !!! 

 Hope it helps 


*/


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
