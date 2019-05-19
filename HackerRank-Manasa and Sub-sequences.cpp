/*
We have to find out the summation of all subset number of a given number . So , let's find a pattern which will give us the idea to work out the solution . Assume given number abc

Then all the seven subset numbers will be 

1)  (100*a +10*b + c ) 

2)  ( 10*b +c )

3)  (10*a + b) 

4)  (10*a + c )

5)  a

6) b

7)  c

--------------------------------------------------------------------
121 a  +  22 b + 4 c

2^0 * 11^2 * a  =  121 a

2^1 * 11^1 * b =   22 b

2^2 * 11^ 0 * c= 4 c

So , pattern we get .That's all . Now do code 

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
    string s;
    cin>>s;
    ll sum=0;
    ll n= s.size()-1;
    for(ll i=0;i<s.size();i++)
    {
        sum=sum+ ((power(2ll,i)*power(11ll,n-i))%mod*(s[i]-'0'))%mod;
    }
  cout<<(sum%mod)<<endl;
}
