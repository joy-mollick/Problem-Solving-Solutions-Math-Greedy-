#include<bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    long long int a,k;
    scanf("%d",&N);
    vector<long long int>v;
    for(int i=0;i<N;i++)
    {
        scanf("%lld",&a);
        v.push_back(a);
    }
    scanf("%lld",&k);
    vector<long long int>::iterator it;
    it=find(v.begin(),v.end(),k);
    int pos=it-v.begin();
    printf("%d\n",pos);
    return 0;
}
