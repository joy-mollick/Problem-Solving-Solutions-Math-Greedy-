#include<bits/stdc++.h>

using namespace std;

const int mx=1e5+500;

typedef long long ll;

int main()

{
    ll n,ans=0;
    cin>>n;
    if(n!=0){
      ans=(2*6+(n-1)*6)*n;
      ans=ans>>1;
    }
    cout<<(ans+1)<<endl;
}
