#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll fact[23]={1};

void calculate()
{
    fact[0]=1;
    ll ans=1;
    for(ll i=1;i<=22;i++)
    {
        ans=ans*i;
        fact[i]=ans;
    }
}


int main()
{
   calculate();
   ll N,a;
   cin>>N;
   map<ll ,ll >m;
   vector<ll>v;
   vector<ll>v1;
   for(int i=0;i<N;i++)
   {
       cin>>a;
       v.push_back(a);
       v1.push_back(a);
       m[a]++;
   }
   sort(v.begin(),v.end());
   if(v==v1)
   {
       cout<<"0.000000"<<endl;
       return 0;
   }
   ll product=1ll;
   ll r;
   map<ll,ll>::iterator it=m.begin();
   for(it;it!=m.end();it++)
   {
       r=it->second;
       product=fact[r]*product;
   }
   ll permutation=fact[N];
    double p = permutation;
    double s = product;
    double ans= p/s;
    printf("%0.6lf\n",ans);
}
