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
