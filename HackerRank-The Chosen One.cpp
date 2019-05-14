#include <bits/stdc++.h>

using namespace std;


typedef unsigned long long int ll;

ll prefix[100001];
ll suffix[100001];
ll arr[100001];

int main()
{
   ll n,ai;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
   }
   if(n==1)
   {
       cout<<arr[1]+1;
       return 0;
   }
   for(int i=1;i<=n;i++)
   {
       prefix[i]=__gcd(prefix[i-1],arr[i]);
   }
   for(int j=n;j>=1;j--)
   {
       suffix[j]=__gcd(suffix[j+1],arr[j]);
   }
   for(int i=1;i<=n;i++)
   {
       ll gcdofallexceptarri=__gcd(prefix[i-1],suffix[i+1]);
       if(arr[i]%gcdofallexceptarri!=0)
       {
           cout<<gcdofallexceptarri;
           break;
       }
   }
   cout<<endl;
}
