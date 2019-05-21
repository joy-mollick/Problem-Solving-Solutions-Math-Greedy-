#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll mod=1e9+7;

ll fact[2001];

void fill_up()
{
    fact[0]=1;
    for(ll i=1;i<=2000;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
}

ll power(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1) // check whether b is odd
          ans=(ans*a)%mod;

          a=(a*a)%mod;
          b=b>>1;// b=b/2
    }
    return (ans%mod);
}

// Complete the solve function below.
ll solve(ll n, ll m) {
    ll up=(fact[m-1+n])%mod;
    ll down = (fact[m-1]*fact[n])%mod;
    //cout<<n<<" "<<m<<" "<<up<<" "<<down<<" "<<fact[m-1]<<" "<<fact[n]<<" "<<endl;
    ll ans= (up*power(down,mod-2))%mod;
    return ans;
}

int main()
{
    fill_up();
    int t;
    cin>>t;
    while(t--){
    ll N,M;
    cin>>N>>M;
    cout<<solve(N,M)<<endl;}

}
