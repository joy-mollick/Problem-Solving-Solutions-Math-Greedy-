    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;


    int main(){
       int n;
       cin>>n;
       ll x,y;
       ll left=0,l;
       ll right=0,r;
       map<ll,ll>leftcross;
       map<ll,ll>rightcross;
       for(int i=0;i<n;i++)
       {
           cin>>x>>y;
           leftcross[x+y]++;
           rightcross[x-y]++;
       }
       map<ll,ll>::iterator it;
       for(it=leftcross.begin();it!=leftcross.end();it++)
       {
           ll p=(it->second);
            l=p*(p-1)>>1;
           left+=l;
           //cout<<p<<" "<<l<<endl;
       }
        for(it=rightcross.begin();it!=rightcross.end();it++)
       {
           ll p=(it->second);
           r=p*(p-1)>>1;
           right+=r;
        //cout<<p<<" "<<r<<endl;
       }
       ll ans=left+right;
       cout<<ans<<endl;

       }
