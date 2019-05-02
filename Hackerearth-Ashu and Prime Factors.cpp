
#include<bits/stdc++.h>


using namespace std;

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */


#define maxi 1000001



int main()
{
    long int min_prime[maxi];
    for(long int i = 0; i <maxi; i++){min_prime[i] = 0;}
    for(long int i=2;i*i<maxi;i++)
    {
        if(min_prime[i]==0)
        {
            for(long int j=i*i;j<maxi;j=j+i)
            {
                if(min_prime[j]==0){
                min_prime[j]=i; // i is the minimum prime factors of number j
                }
            }
        }
    }
    // which are prime

    for(long int i=2;i<maxi;i++)
    {
        if(min_prime[i]==0)
        {
            min_prime[i]=i;// i is the prime itself and it's own minimum prime factor
        }
    }
    long int  such_numbers[maxi];
   for(long int i = 2; i < maxi; i++)
   {
       such_numbers[i]=0;
   }

    for(long int j=2;j<maxi;j++)
    {
        such_numbers[min_prime[j]]++;// how much number having x as a minimum prime factor , where x=min_prime[j]
    }


    long int test,n,i,j;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&i);
        printf("%lld\n",such_numbers[i]);
    }
}
