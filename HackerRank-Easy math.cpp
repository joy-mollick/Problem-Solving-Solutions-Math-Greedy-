/*
So , from description it is must that a 4 obviously appeared zero may be appeared or not .

So , we can rewrite the constraints as like our number will be (4*k *10^m) k is will be form of 111..... just like 

this so that by multiplying 4 it will be 44444444.......... and if zero(0) then it will be 44444000000......... 
So , our given number may be p .

So , (4*k *10^m) / p= L . L should be integral number .

So the number of twofactors of p are say b , So two 2's obviously should be for cutting 4 of the form ( (4*k *10^m) ) 

other 2's for cutting 10^m . and number of 5's factors will be available for cutting 10^m also . 

So number of zeroes will be maximum ( twofactors of p -2, 5's factors of p) isn't it ?

And rest of numbers p divided by 2 and 5 . Will be used to find which k is divisble by p (with out 2 and 5 factors ) 

so number of k like say 111 so number of 4's will be 444 ( 3 times ) .This is our logic . Hope it helps ..Now do code 




*/



#include <bits/stdc++.h>

using namespace std;


typedef unsigned long long int ll;

const ll m=1000000000000000001;


int main()
{
     int t,n;
     cin>>t;
     long j;
     while(t--)
     {
         cin>>n;
         long countoftwo=0;
         long countoffive=0;
         while(n%2==0)
         {
             n=n>>1;
             countoftwo++;
         }
         while(n%5==0)
         {
             n=n/5;
             countoffive++;
         }
         j=max(countoftwo-2,countoffive);
         long count=1;
         long a=1;
         while(a%n!=0)
         {
             a=(a*10+1)%n;
             count++;
         }
         cout<<(2*count+j)<<endl;
     }
}
