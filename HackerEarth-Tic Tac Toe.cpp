#include<bits/stdc++.h>

using namespace std;

#define max 1000000007

/*
The minimum sum of square of the match win by each player will be the fact if each player win same number of matches and it's possible
that because it's round-robin tournament.So total match possible NC2 (N! / 2!*(N-2)!). If N players win same number of matches .Then
each player will win (NC2/N) matches. So , for one player the sum will be (NC2/N)^2. for N players , the sum will be N*((NC2/N)^2)
The term (NC2/N) will be expressed in normal form (N-1)/2 now, square of this (N-1)*(N-1)/4.Totally final form is (N*(N-1)^2)/4

For maximum case:
For this i used a greedy approach.assign the best possible values that you can assign at each step. each player plays n-1 games.
starting from player 1, using greedy approach assume he won all his games...w1=n-1
player 2 now has n-2 wins as he has already lost against player1...w2=n-2
similarly w3=n-3
wn=0
so answer= summation (n-1) square from 1 to n.
Our formula is 1^2 + 2^2 +........+ n^2 = n*(n+1)*(2n+1)/6;
replace n-1 for n. Now logic is done .
*/

typedef unsigned long long int ll;
#define mod 1000000007

ll sumofsquares(ll n)
{
    n=n%mod;
    ll ans=(((n*(n-1))%mod*(2*n-1))%mod * 166666668)%mod;
    return ans%mod;
}

ll minimumrules(ll n)
{

    ll ans=(((((((n%mod)*((n-1)%mod))%mod)*(n-1)%mod))%mod)*(250000002%mod))%mod;
    return ans%mod;
}

int main()

{
   ll t,n;
   scanf("%llu",&t);
   while(t--)
   {
       scanf("%llu",&n);
       printf("%llu %llu\n",minimumrules(n),sumofsquares(n));
   }
   return 0;
}
