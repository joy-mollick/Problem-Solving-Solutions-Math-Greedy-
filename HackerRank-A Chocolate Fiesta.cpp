#include <bits/stdc++.h>

using namespace std;

const long mod =1e9+7;

long power(long a,long b)
{
    if(b==0||b==-1)
    {
        return 1;
    }
    long ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;

        a=(a*a)%mod;
        b=b>>1;
    }
    return (ans%mod);
}

int main() {
    long t,n,a;
    cin>>n;
    long even=0;
    long odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)

    {
    even++;
    }
    else odd++;
    }
    long event=(power(2,even)-1)%mod;
    long oddt =(power(2,odd-1)-1)%mod;
    long total=((event*oddt)%mod+oddt+event)%mod;
    cout<<total<<endl;
}
