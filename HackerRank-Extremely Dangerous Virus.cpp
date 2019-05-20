/*
GIven probability is 0.5 ( 1/2 ) . Factors are a and b . Initially cell is 1

Every time ,it grows according expected value using factor given a & b

fIrst time virus cell will be (a*(1/2)) + (b*(1/2)) = (a+b)/2;

Now cells are (a+b)/2; Now this will be growing into again by factor a & b with probability (1/2) .Let's see ....................

a*( ( a + b ) / 2 ) * ( 1 / 2 ) + b* ( ( a + b ) / 2 ) * ( 1 / 2 )

= ( ( a + b ) / 2 ) * (( a + b ) / 2 ) ) , when time is 2 milisecond .

So from this pattern , we can say ( ( a + b ) / 2 ) ^ t ....... %mod .



*/


#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

const ll mod=1e9+7;

ll power(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;

            a=(a*a)%mod;
            b=b>>1;
    }
    return ans;
}

int main()
{
    ll n,a,b,c,time;
    cin>>a>>b>>time;
    ll exp=(a+b)/2;
    ll result= power(exp,time)%mod;
    cout<<result<<endl;
}

