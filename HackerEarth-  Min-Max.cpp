#include<bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    long long int a,k;
    scanf("%d",&N);
    vector<long long int>v;
    unsigned long long int sum=0;
    for(int i=0;i<N;i++)
    {
        scanf("%lld",&a);
        v.push_back(a);
        sum=sum+a;
    }
    unsigned long long mn=1000000000000000000,mx=0;
    for(int i=0;i<N;i++)
    {
        if(sum-v[i]>mx)
        {
            mx=sum-v[i];
        }
        if(sum-v[i]<mn)
        {
            mn=sum-v[i];
        }
    }
    printf("%llu %llu\n",mn,mx);

    return 0;
}
