#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main()
{
    ll a,b,x,t;
    cin>>t;
    while(t--){
    cin>>a>>b>>x;
    ll po=pow(a,b);
    ll d;
    double c=(double)po/x;
    c=c-(int)c;
    if(c>=0.50)
    {
        d=(int)(po/x)+1;
    }
    else
    {
        d=(int)(po/x);
    }
    cout<<d*x<<endl;
    }
}
