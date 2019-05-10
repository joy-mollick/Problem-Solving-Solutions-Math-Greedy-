#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

bool prime[1000501];

void prime_sieve()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i<=sqrt(1000500);i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<=1000500;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    prime[2]=true;
    prime[1]=false;
}

vector<int>v;

void fill_up()
{
    for(int i=2;i<=1000500;i++)
    {
        if(prime[i]&&i%11==1)
        {
            v.push_back(i);
        }
    }
}


int main()
{
	prime_sieve();
	fill_up();
	int t,n;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	vector<int>::iterator it=lower_bound(v.begin(),v.end(),n);
	printf("%d\n",(*it));
	}
}
