    #include<bits/stdc++.h>
    using namespace std;
    using ll=long long;
    ll mod=1e9+7;
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    #define pb push_back
    #define um unordered_map
    #define pr pair
    #define mm multimap
    #define ms multiset
    #define mp make_pair
    #define vr vector
    int main()
    {
       ll t,n,m,i,j,k;
       cin>>t;
       bool b[1000001]={false};
       vr<ll>v;
       for(i=2;i<=1000;i++)
       {
           if(b[i]==false)
           {
               for(j=i*i;j<=1000000;j+=i)
               {
                   b[j]=true;
               }
               v.pb(i);
           }
       }
       for(i=1001;i<=1000000;i++)
       if(b[i]==false)v.pb(i);
       while(t--)
       {
           cin>>n;
           ll a[n];
           um<ll,ll>z;
           ll ans=-1;
           for(i=0;i<n;i++)cin>>a[i],z[a[i]]=1;
           m=*max_element(a,a+n);
           for(i=0;i<v.size();i++)
           {
               k=0;
            for(j=v[i];j<=m;j+=v[i])
               {
                   if(z[j]==1)
                   ++k;
               }
               if(k==0)
               {
                   ans=v[i];
                   break;
               }
           }
           cout<<ans<<"\n";
       }
    }
