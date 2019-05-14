#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

 vector<ll> fact;

ll power(ll a, ll b, ll mod){
    if(b == 0)
        return 1;
    ll temp = power(a,b>>1,mod)%mod;
    temp = (temp*temp)%mod;
    if(b&1)
        temp = temp*a%mod;
    return temp;
}

ll phi(ll n)
{
    ll result = n;
    for (ll p = 2; p * p <= n; ++p) {

        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

void factor(ll n)
{
    ll number = n-1 ;
    for(ll i = 2 ; i*i <= number ; i++){ // O(n)
        if( number%i == 0 )
            fact.push_back(i);
        while(number%i == 0)
            number /= i;
    }
    if(number > 2)
        fact.push_back(number);
}
void leastprimitive(ll n)
{
    ll s_primitive;
    for(ll i = 2 ; i < n ; i++){
        bool flag = true;
        for(int j=0;j<fact.size();j++){
            if(power(i,n/fact[j],n) == 1){
                flag = false;
                break;
            }
        }
        if(flag){
                s_primitive = i;
                break;
            }
    }
    cout << s_primitive << " ";
}

int main()

{
    ll p;
    cin>>p;
    factor(p);
    leastprimitive(p);
    cout<<phi(p-1)<<endl;
}

