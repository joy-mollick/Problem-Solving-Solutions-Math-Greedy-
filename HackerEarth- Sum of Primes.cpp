
#include<bits/stdc++.h>

// Clasical dp problem , U have to find out in which way U have to precalculate the result %m.

using namespace std;

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

#define maxi 1000001

typedef long long int ll;
ll sum_of_primes[maxi];

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
    sum_of_primes[0]=0;
    sum_of_primes[1]=0;
    sum_of_primes[2]=2;
    for(ll k=3;k<maxi;k++)
    {
        if(prime[k])
        {
            sum_of_primes[k]=sum_of_primes[k-1]+k;
        }
        else{
            sum_of_primes[k]=sum_of_primes[k-1];
        }
    }
}

int main()
{
    sieve();
    int test,n,i,j;
    cin>>test;
    while(test--)
    {
        cin>>i>>j;
        cout<<sum_of_primes[j]-sum_of_primes[i-1]<<endl;
    }
}
