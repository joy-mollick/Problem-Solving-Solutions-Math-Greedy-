/*
Just Do The Normal Product Formula First Calculate the frequency . And From 0 to n-1 calculate the sum of frequency of numbering of pick . And subtract one from sum , because one will be selected ,the remaining will be sum=sum-1;And Add the frequency of current numbering . And do multiplication of sum with product under modulo .Use long .That's all think about the example

4 0 0 1 1

the ans willl be the form 2*3*2*1

Now if we calculate according our algorithm . Then , initial sum=0; try to traverse from 0 to 3 0-> sum=sum+freq(o)=0+2=2,one will be used .So ,now sum=sum-1=1; 1-> sum=sum+freq(1)=1+2=3, one will be used .So ,now sum=sum-1=2; 2->sum=sum+freq(2)= 2+0=2, one will be used .So ,now sum=sum-1=1; 3->sum=sum+freq(2)= 1+0=1, one will be used .So ,now sum=sum-1=0;

                                                    product 2*3*2*1=12 .Same as we expect by practical .

                                                    Be happy and Do code 






*/




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
