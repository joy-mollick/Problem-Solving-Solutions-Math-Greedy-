    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;


    int main(){
       ll n,k,sum;
       cin>>n;
       vector<ll>v;
       for(int i=0;i<n;i++)
       {
           cin>>k;
           v.push_back(k);
       }
       sum=abs(v[0]);
       for(int i=n-1;i>=1;i--)
       {
           sum+=abs(v[i]-v[i-1]);
       }
        cout<<sum<<endl;
       }
