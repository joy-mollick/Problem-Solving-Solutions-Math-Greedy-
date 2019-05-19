#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
  long a, ans;
  long  sum=0;
  cin>>n;
  while(n--)
   {
      cin>>a;
      sum=sum+a;
   }
  if(sum%2==0)
   {
      cout<<(sum/2)<<".0"<<endl;
   }
  else
   {
      cout<<(sum/2)<<".5"<<endl;
   }
}
