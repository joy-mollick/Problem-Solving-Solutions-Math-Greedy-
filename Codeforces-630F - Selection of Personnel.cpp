    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long int ll;
    const ll mod=1e9+7;
     ll ncr[779][779];

    int main()
  {
      for(int i=0;i<778;i++)
      {
          ncr[i][0]=ncr[i][i]=1;
          for(int j=1;j<i;j++)
          {
              ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
          }
      }
    ll n;
    cin>>n;
    ll ans=ncr[n][5]+ncr[n][6]+ncr[n][7];
    cout<<ans<<endl;
  }
