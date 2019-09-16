    #include <bits/stdc++.h>

    using namespace std;

    typedef  long long int ll;

    int main()

    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
       ll n;
       int a;
       cin>>n;
       int v[n];
       int minu[n];
       int sum=0;
        ll neg=0,pos=1;
       for(int i=0;i<n;i++)
       {
           cin>>a;
           if(a<0)
           {
               sum++;
           }
           if(sum%2==0)
           {
               pos++;
           }
           else
           {
               neg++;
           }
       }
       neg=1ll*(neg*(pos));
       ll tot=(n*(n+1))>>1;
       cout<<neg<<" "<<(tot-neg)<<'\n';
       return 0;
    }
