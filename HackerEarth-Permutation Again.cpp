#include<bits/stdc++.h>

using namespace std;

/*

Consider the soln of maximum sum for the value n= 5
so to obtain the maximum sum first take the two value which can produce the diff maximum that is first and last number 1 and 5 or 5 and 1 so now the A : 1,5;
 then next value which can produce max diff is 2 which will give the diff = 3 and then the next element will be 4 the diff will be 2 then left value is 3 so the soln becomes A: 1 , 5 , 2, 4 ,3 diff = 4+3+2+1 so it is right ???
 observe this pattern 1,N,N-3,N-1,N-2 what you see is (N-1),(N-2),,,,,3,2,1 so the sum can be obtained by using the formula n*(n-1)/2;
no by removing the last value 3 and adding it to first gives the 3 ,1 5, 4 ,2 the diff is 11 so the maximum sum which can be obtained is 11 so some changes in the above the formula can gives us the ans that what we did removed the value 3 the diff obtained when 3 was not removed was 1 that is 4 -3 =1 we have to remove it from our formula now our formula becomes n*(n-1)/2 -1 ; then we added the value 3 in first gives the diff 2 if is odd so we have to add n/2 now the formula becomes n*(n-1)/2 +n/2 -1; solving the above formula gives (n*n)/2 -1


*/

int main()

{
    long long int T,N,fact;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&N);
        if(N==1)
        {
            printf("1\n");
            continue;
        }
        fact=(N*N)>>1;
        printf("%lld\n",fact-1);
    }
    return 0;
}
