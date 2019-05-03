#include<bits/stdc++.h>

using namespace std;

int main()

{
    int N,a;
    scanf("%d",&N);
    int arr[N];
    unsigned long long  sum=0;
    int count=0;
    int meg_maxi;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);

if(arr[i]>=0)       {
           sum=sum+arr[i];
           count++;
       }
    }

    if(count!=0)
    {
        printf("%llu %d\n",sum,count);
    }
    else
    {
        meg_maxi=arr[0];
        for(int j=1;j<N;j++)
        {
            meg_maxi=max(meg_maxi,arr[j]);
        }
        printf("%d 1\n",meg_maxi);
    }
    return 0;
}
