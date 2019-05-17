#include<bits/stdc++.h>

using namespace std;

const int mod=1000000007;

long arr[5000001]={0};

int main()

{
    int t;
    cin>>t;
    while(t--){
    int n,a,i;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>a;
        arr[a]++;
    }
    long product=1;
    long sum=0;
   // vector<int>::iterator it;
    for( i=0;i<n;i++)
    {
       sum=(sum+arr[i])%mod;
       //cout<<sum<<endl;
       product=((product%mod)*(sum%mod))%mod;
       sum--;
       arr[i]=0;//back to zero -> reset
    }
    arr[i]=0;
    cout<<product<<endl;
    }
    return 0;
}
