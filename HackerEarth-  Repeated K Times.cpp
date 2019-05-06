#include<bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    int a,k;
    scanf("%d",&N);
    int arr[N];
    int hashing[100001];
    memset(hashing,0,sizeof(hashing));
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        hashing[arr[i]]++;
    }
    scanf("%d",&k);
    for(int j=0;j<100001;j++)
    {
        if(hashing[j]==k)
        {
            printf("%d\n",j);
            break;
        }
    }
    return 0;
}
