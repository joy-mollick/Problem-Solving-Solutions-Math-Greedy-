    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long int ll;

int main()
{
    int i, j;
	ll LIM=50;
	ll fact[LIM+1][LIM+1];
	for (i = 0; i < LIM; ++i) {
		fact[i][0] = fact[i][i] = 1;
		for (j = 1; j < i; ++j) {
			fact[i][j] = fact[i - 1][j - 1] + fact[i - 1][j];
		}
	}

    ll t,m,n;
    while(cin>>n>>m>>t)
    {
         if(t==n+m) {cout<<"1"<<endl;continue;}
        ll boy=t-1ll;
        ll ans=0ll;
        for(ll girl=1;boy>=4&&girl<=m;girl++,boy--)
        {
            if((m>=girl)&&(n>=boy)){
            ll sbtot=fact[m][girl];
            ll sbtot1=fact[n][boy];
            //cout<<m<<"c"<<girl<<"      "<<n<<"c"<<boy<<endl;
           // cout<<sbtot<<" "<<sbtot1<<endl;
            ans+=(sbtot*sbtot1);}
        }
        cout<<ans<<endl;
    }
}
