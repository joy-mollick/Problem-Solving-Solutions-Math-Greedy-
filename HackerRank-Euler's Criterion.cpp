#include <bits/stdc++.h>

using namespace std;


typedef unsigned long long int ll;

ll power(ll a,ll b,ll m)
{
    ll ans=1;
    a=a%m;
    while(b)
    {
        if(b&1)
        ans=(ans*a)%m;

        a=(a*a)%m;
        b=b>>1;
    }
    return (ans%m);
}

int main()
{
    ll T,n,M;
    cin>>T;
    while(T--)
    {
        cin>>n>>M;
        if(n==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(power(n,(M-1)/2,M)==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
