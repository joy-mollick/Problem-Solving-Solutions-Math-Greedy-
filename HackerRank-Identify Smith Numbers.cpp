#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

ll sum_of_digits(ll n)
{
    ll sum=0;
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}
void prime(ll &factorsum,ll n)
{
    while(n%2==0)
    {
        factorsum=factorsum+2;
        n=n>>1;
    }
    for(ll i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            factorsum=factorsum+sum_of_digits(i);
            n=n/i;
        }
    }
    if(n>1)
    {
        factorsum=factorsum+sum_of_digits(n);
    }
}

int main()
{
    ll n;
    cin>>n;
    ll factorsum=0;
    prime(factorsum,n);
    ll digits=sum_of_digits(n);
    if(digits==factorsum)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
