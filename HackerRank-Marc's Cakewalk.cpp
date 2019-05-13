

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int sumofdigits(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}

int main() {
 int t,a;
 int q;
 cin>>t;
 while(t--)
 {
     cin>>q;
     int ans=0;
     while(q--)
     {
         cin>>a;
         ans=ans+sumofdigits(a);
     }
     if(ans%3==0)
     {
         cout<<"Yes"<<endl;
     }
     else{
        cout<<"No"<<endl;
     }
 }

}


