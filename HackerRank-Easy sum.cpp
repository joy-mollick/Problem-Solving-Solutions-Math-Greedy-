#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()
{
   ll t,n,m;
   cin>>t;
   while(t--)
   {
       cin>>n>>m;
       ll times=(n/m);
       ll remaining=n%m;
       ll summ_1=(m*(m-1))/2;
       ll total=summ_1*times;
       ll reamining_sum=(remaining*(remaining+1))/2;
       total=total+reamining_sum;
       cout<<total<<endl;
   }
}
