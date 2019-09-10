    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long int ll;
    const ll mod=1e9+7;

    ll fin(string s)
    {
        ll x=0;
        for(int i=0;i<s.size();i++)
        {
            x=x*10+(s[i]-'0');
        }
        if(x<10) return x;
        ll ans=0;
        ans=(x/10)-1;
        ans=ans+9;
        if(s[0]<=s[s.size()-1]) ans++;

        return ans;
    }

    int main()
  {
      ll s1,s2;
      cin>>s1>>s2;
      string S1,S2;
      s1--;
      S1=to_string(s1);
      S2=to_string(s2);
      ll res1=fin(S2);
      ll res2=fin(S1);
      ll res=res1-res2;
      cout<<res<<endl;
  }
