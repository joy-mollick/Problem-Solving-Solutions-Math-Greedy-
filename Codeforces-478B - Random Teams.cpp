    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;


    int main(){
        ll n,m,kmn,kmx;
        cin>>n>>m;
        ll mx_nmber=n-(m-1);
        kmx=(mx_nmber*(mx_nmber-1))>>1;
        ll eql=(n/m);
        ll eq_tms=m;
        ll sum_of_one=(eql*(eql-1))>>1;
        ll sum=sum_of_one*eq_tms;
       // cout<<sum<<" "<<eql<<endl;
        ll rest=n%m;
        if(!rest) kmn=sum;

        else
        {
            ll nw_tms=rest;
            ll nw_sm=nw_tms*sum_of_one;
           // cout<<"bad "<<nw_sm<<endl;
            sum-=nw_sm;
            ll nw_one=eql+1;
           // cout<<"nw nm"<<nw_one<<endl;
            ll nw_xtra=(nw_one*(nw_one-1))>>1;
            nw_xtra*=nw_tms;
           // cout<<nw_xtra<<endl;
            sum+=nw_xtra;
            kmn=sum;
        }
        cout<<kmn<<" "<<kmx<<endl;
    }
