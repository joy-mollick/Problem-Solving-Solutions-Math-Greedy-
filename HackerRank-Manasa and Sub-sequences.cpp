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
