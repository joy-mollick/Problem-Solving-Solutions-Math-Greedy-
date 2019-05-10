    #include<bits/stdc++.h>
    using namespace std;
    typedef unsigned long long int ll;
    ll mod=1e9+7;
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    #define pb push_back
    #define um unordered_map
    #define pr pair
    #define mm multimap
    #define ms multiset
    #define mp make_pair
    #define vr vector
    bool b[100000001]={false};
    int main()
    {
        fast;
       ll t,n,m,i,j,k;
       vr<ll>v;
       for(i=2;i*i<=100000000;i++)
       {
           if(b[i]==false)
           {
               for(j=i*i;j<=100000000;j+=i)
               {
                   b[j]=true;
               }
           }
       }
       for(i=2;i<=100000000;i++)
       if(b[i]==false)v.pb(i);

       //cout<<v.size()<<endl;
      vr<ll>prime_sum;
      ll sum=0;
      for(int i=0;i<v.size();i++)
      {
          sum=sum+v[i];
          prime_sum.push_back(sum);
      }
      cin>>t;
      while(t--)
      {

          cin>>n;
          cout<<prime_sum[n-1]<<endl;
      }
    }
