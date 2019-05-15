#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,A,B,C,D;
    cin>>T;
    while(T--)
    {
        cin>>N;
        cin>>A>>B>>C>>D;
        long long ways[N+1]={0};
        for(int i=0;i<=A;i++)
        {
            for(int j=0;j<=B&&(i+2*j)<=N;j++)
            {
                ways[(i+2*j)]++;
            }
        }
        long long ans=0;
        for(int i=0;i<=C&&(i*5)<=N;i++)
        {
            for(int j=0;j<=D&&((i*5)+(10*j))<=N;j++)
            {
                ans+=ways[N-((i*5)+(10*j))];
            }
        }
        cout<<ans<<endl;
    }
}
