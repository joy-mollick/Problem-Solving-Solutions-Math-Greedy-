#include<bits/stdc++.h>

using namespace std;

const long long mod=1e9+7;

int main()

{
    long long x,y,n;
    long long arr[6];
    cin>>x>>y;
    cin>>n;
    arr[0]=(x+mod)%mod;
    arr[1]=(y+mod)%mod;
    arr[2]=((y-x)+mod)%mod;
    arr[3]=(-x+mod)%mod;
    arr[4]=(-y+mod)%mod;
    arr[5]=((x-y)+mod)%mod;
    n=(n-1)%6ll;
    cout<<((arr[n]+mod)%mod)<<endl;
    return 0;
}
