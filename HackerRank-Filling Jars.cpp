#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
vector<string> split_string(string);

// Complete the solve function below.
 ll total=0;
 void solve( ll a,ll b, ll k ) {
        ll l1=a;
        ll r1=b;
        ll K= k;
     total=total+(((r1-l1)+1)*K);
       // cout<<l1<<" "<<r1<<" "<<k<<endl;
   // return total;
}

int main()
{
    ll n,m,a,b,k;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b>>k;
        solve(a,b,k);
    }
    ll ans= floor(total/n);
    cout<< ans<<endl;

}
