    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long int ll;
    const ll mod=1e9+7;

int main()
{
    ll n,m;
    cin>>n>>m;
    string S;
    vector<string>v;
    while(n--)
    {
        cin>>S;
        v.push_back(S);
    }
    ll ans=1;
    for(int i=0;i<m;i++)
    {
        set<char>s;
        for(int j=0;j<v.size();j++)
        {
            string p=v[j];
            s.insert(p[i]);
        }
       ll  cnt=(ll)(s.size());
       //cout<<cnt<<endl;
       ans*=cnt;
       ans=ans%mod;
       s.clear();
    }
    cout<<(ans%mod)<<endl;
}
