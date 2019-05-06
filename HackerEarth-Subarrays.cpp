#include<bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    long long int a,k;
    scanf("%d",&N);
    int arr[N];
    bool positive=false;
    for(int i=0;i<N;i++)
    {

        scanf("%lld",&arr[i]);
        if(arr[i]>=0)
        {
            positive=true;
        }
    }
    if(!positive)
    {
        printf("0 0\n");
        return 0;
    }
    long long int sum=arr[0],ans=arr[0];
    map<long long int,int>m;
    m[sum]++;
    for(int j=1;j<N;j++)
    {
        if(sum+arr[j]>arr[j])
        {
            sum=sum+arr[j];
        }
        else{
            sum=arr[j];
        }
        ans=max(ans,sum);
        m[sum]++;
        //cout<<ans<<endl;
    }
    printf("%lld %d\n",ans,m[ans]);
    return 0;
}
