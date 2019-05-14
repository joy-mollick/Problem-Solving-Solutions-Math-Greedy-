#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

const ll mod=1e9+7;

ll powp(ll a, ll b)
{
    ll ans=1;
    a=a%mod;
    b=b%mod;
    while(b)
    {
        if(b&1)
        ans=((ans)*(a))%mod;

        a=((a)*(a))%mod;
        b=b>>1;
    }
    return (ans%mod);
}

int main()
{
    int t;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll A=0;
        ll B=0;
        for(int i=0;i<a.size();i++)
        {
            A=((((A)*10))+(a[i]-'0'))%mod;
        }
        for(int j=0;j<b.size();j++)
        {
            B=((((B)*10))+(b[j]-'0'))%(mod-1);
        }
        if(B==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<powp(A,B)<<endl;
        }
    }
}

