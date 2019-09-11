    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long int ll;
    const ll mod=1e9+7;
    #define pb push_back
    #define c cout
    #define cn cin
    #define e endl

    int main()
  {

    ll n=6,a;
    vector<int>v;
    while(n--)
    {
        cn>>a;
        v.pb(a);
    }
    ll ans=(v[0]+v[1]+v[2])*(v[0]+v[1]+v[2])-(v[0]*v[0])-(v[2]*v[2])-(v[4]*v[4]);
    c<<ans<<e;
  }
