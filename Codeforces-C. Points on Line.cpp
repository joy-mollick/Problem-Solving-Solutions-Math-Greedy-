    #include<bits/stdc++.h>

    using namespace std;

    typedef long long int ll;


int main()
{
    ll a,d,n;
    vector<ll>v;
    cin>>n>>d;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    ll ans=0;
    for(int i=0;i<v.size();i++)
    {
        ll pos=upper_bound(v.begin(),v.end(),v[i]+d)-v.begin();
        pos=pos-i-1;
        if(pos>1)
        {
            ans+=(pos*(pos-1))>>1;
        }

    }
    cout<<ans<<endl;
}
