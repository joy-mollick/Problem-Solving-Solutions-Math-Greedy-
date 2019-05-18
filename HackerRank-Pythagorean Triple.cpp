#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()
{
    ll a,b,c;
    cin>>a;
    if(a%2==0)
    {
         b=((a/2)*(a/2))-1;
         c=b+2;
    }
    else
    {
         b=((a*a)-1)/2;
         c=b+1;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}
