#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

#define MAX 10
#define ll long long


/*
let's he will give k money for bet so his total k*d(k)+(n-k).Now , k*d(k)-k+n=k*(d(k)-1)+n;
So , for a number we have to calculate the maximum k*(d(k)-1): So, first of all we will find the number of (divisors -1)[d(k)-1] for every number by sieve
then by another loop we will found k*(d(k)-1) for by another loop . Then another loop to store maximum k*(d(k)-1) for a value n
then for every query we will print ans[q]+n ,our answer

*/
ll fac[MAX], ans[MAX];

void sieve() {
    for (ll i = 2; i < MAX; i++) {
        for (ll j = i; j < MAX; j += i) {fac[j]++;}
    }
    for (ll i = 1; i < MAX; i++) {fac[i] *= i;}

    ans[1] = fac[1];
    for (ll i = 2; i < MAX; i++) {ans[i] = max(fac[i], ans[i -1]);}
}


int main()

{
    int tc, n; scanf("%d", &tc);
    sieve();
    while (tc--) {
        scanf("%d", &n);
        ll out = ans[n] + n;
        printf("%lld\n", out);
    }
    return 0;
}
