#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.

bool square(unsigned long long n)
{
    unsigned long long ans=sqrt(n);
    if(ans*ans==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
   unsigned long long t,p,res;
   cin>>t;
   while(t--)
   {
       cin>>p;
       res=((8*p)+1);
       if(!square(res))
       {
           cout<<"Better Luck Next Time"<<endl;
       }
       else{
           res=sqrt(res);
           res=res-1;
           res=res/2;
           cout<<"Go On Bob "<<res<<endl;
       }
   }
}
