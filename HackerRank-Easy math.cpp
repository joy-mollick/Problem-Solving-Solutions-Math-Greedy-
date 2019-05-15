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
