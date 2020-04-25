    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    int main(){
        ll t,n,i,j,k,l;
        ios_base::sync_with_stdio(0);
        cin>>t;
        while(t--){
            scanf("%lld %lld",&n,&k);
            ll a[n];
            ll pref[n+1];
            pref[0]=0;
            for(i=0;i<n;i++){
                scanf("%lld",&a[i]);
            }
            for(i=1;i<=n;i++){
                pref[i]=pref[i-1]+a[i-1];
            }
            sort(pref,pref+n+1);

            //cout<<endl;
            ll ans=0;
            for(i=0;i<n;i++){
                ll val=pref[i]+k;
                ll cal=upper_bound(pref,pref+n+1,val)-pref;
               //cout<<cal<<" ";
                ans+=((n+1)-cal);
            }
            ptintf("%lld\n",ans);
        }
    }
