    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long int ll;
    const ll mod=1e9+7;
    #define pb push_back
    #define c cout
    #define cn cin
    #define e endl

    int main()
  {
     int n,a,ans;
     vector<int>v;
     cn>>n;
     for(int i=0;i<n;i++)
     {
         cn>>a;
         v.pb(a);
     }
     int energy=0;
     int count=0;
     for(int i=1;i<n;i++)
     {
         energy+=v[i-1]-v[i];
         if(energy<0)
         {
             count=max(count,abs(energy));
         }
     }
     if(count>0)
      ans=v[0]+count;
      else
        ans=v[0];

     c<<ans<<e;

  }
