#include<bits/stdc++.h>

using namespace std;

#define max 1000001

int main()

{
    int test,N,k;
    scanf("%d%d",&test,&N);
    int arr[N+1]={0};
    // sieve for storing number of divisors of a value till N
    for(int i=1;i<=(N);i++)
    {
        for(int j=i;j<=N;j=j+i)
        {
            arr[j]++;
        }
    }
    vector<int>v;
    vector<int>::iterator it;
    for(int i=1;i<=N;i++)
    {
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    while(test--){
    scanf("%d",&k);
    int val=arr[k];
     it=lower_bound(v.begin(),v.end(),val);// iterates to iterator which  are greater or equal than the val
    int ans=it-v.begin();// under the value of that iterator are obviously less than the number of divisors of that value .
    printf("%d\n",ans);
    }
    return 0;
}
