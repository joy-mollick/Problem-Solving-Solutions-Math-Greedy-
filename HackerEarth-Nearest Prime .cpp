#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

// U have to find closest prime , so use sieve and binary search(upper_bound) to find out them

#define maxi 1000001
vector<int>v;
void sieve()
{
    bool prime[maxi];
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<maxi;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<maxi;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    prime[2]=true;
    v.push_back(2);
    for(int k=3;k<maxi;k=k+2)
    {
        if(prime[k])
        {
            v.push_back(k);
        }
    }
}

int main()

{
    sieve();
    int test,n;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("2\n");
            continue;
        }
        int upper,lower;
        vector<int>::iterator it=upper_bound(v.begin(),v.end(),n);
        if(it==v.end())
        {
            it--;
            int lower=(*it);
            printf("%d\n",lower);
        }
        else
        {
            upper=(*it);
            it--;
            lower=(*it);
            if(abs(lower-n)<=abs(upper-n))
            {
                printf("%d\n",lower);
            }
            else
            {
                printf("%d\n",upper);
            }
        }
    }
    return 0;
}
