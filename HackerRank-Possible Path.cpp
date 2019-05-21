#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

typedef long long ll;

// Complete the solve function below.
string ans;

bool solve(ll a, ll b, ll x, ll y) {
    //cout<<a<<" "<<b<<endl;
    if(__gcd(a,b)==__gcd(x,y))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    ll n,a,b,x,y;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>x>>y;
        if(solve(a,b,x,y))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
