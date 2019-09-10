    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;

    const ll mod=1e9+7;

    ll po(ll a,ll b)
    {
        ll ans=1ll;
        while(b)
        {
            if(b&1) ans=(ans*a)%mod;

            a=(a*a)%mod;
            b=b>>1;
        }
        return (ans%mod);
    }


    int main(){
       int n;
       cin>>n;
       ll frst=po(3,3*n);
       ll subtrct=po(7,n);
       ll ans=(frst-subtrct+mod)%mod;
       cout<<ans<<endl;
       }
