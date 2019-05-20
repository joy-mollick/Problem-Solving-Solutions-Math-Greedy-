/*
it's very Easy . U have to think about very basically ....

Given equation (n-i)*i <= n. k

Let's assume that the equation is (n-i)*i = n * k 

n*I - i* i = n* k

i*i - n* i = - n* k

( i - n/2 ) ^ 2 - (n/2 )^2 = - n* k [ by making it to formula of ( a- b ) ^ 2 =a^2 - 2 * a *b + b^ 2 ] 

( i - n/2 ) ^ 2  =  (n/2 )^2  - n*k

( i - n/2 )  = (+-) sqrt (  n^2 - 4 * n* k ) / 2 

i = (+-) sqrt (  n^2 - 4 * n* k ) / 2  + (n/2 ) 

Here is two answer for (+-)  value of sqrt . So , we will the minimum value  which will be (X) =  (n/2 ) - sqrt (  n^2 - 4 * n* k ) / 2  ;

So , i= X .

This is the solution of equation given  (n-i)*i = n * k. 

For the  minimum value of i (X) , this equation will be true . So , obviously  the value less than  (X) obviously make  (n-i)*i this part less than the right part (n * k ) . So , all the value from 1 to X (i) will make (n-i)*i this part less than the right part (n * k ) . Now , if i make this condition true , for every value i , on the other hand (n-i) is also value which will make this condition true . 

So , the answer will be double of X ( 2*X ).




*/



#include <bits/stdc++.h>

using namespace std;


typedef long long int ll;


int main()
{
   ll t,n,k,b,c,f;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       ll count=0;
       c= (n*k);
       f= (n*n);
       b= (f-(4*c));
      // cout<<b<<" "<<c<<endl;
       if(b<=0)
       {
           cout<<(ll)(n-1ll)<<endl;
           continue;
       }
       ll d= floor(ceil(sqrt(b)));
       ll low_limit = ((n- d)/2);
       cout<<(2*low_limit)<<endl;
   }
}
