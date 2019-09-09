    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long ll;


    int main(){
       int n;
       cin>>n;
       ll arr[n];
       ll a;
       for(int i=0;i<n;i++) cin>>arr[i];
       ll tota=1,zero=0;
       bool frstone=false;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==0) zero++;
           else if(arr[i]==1&&frstone)
           {
               //cout<<zero<<endl;
               tota*=(zero+1);
               zero=0;
           }
           if(arr[i]==1) {frstone=true;zero=0;}

       }
       if(frstone)
       cout<<tota<<endl;
       else cout<<"0"<<endl;
       }
