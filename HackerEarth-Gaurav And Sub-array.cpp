    #include<bits/stdc++.h>

    /*

    It's nothing but the main problem is to find the minimum length subarray whose sum is at least k means (greater or equal than k)
    Now here we build our array as the number of one's in that number into a binary string .
    Now , U can go and code.

    */



    using namespace std;
    #define ll long long int

    ll smallestSubWithSum(ll arr[], ll n, ll x)
{

    ll curr_sum = 0, min_len = n+1;


    ll start = 0, end = 0;
    while (end < n)
    {

        while (curr_sum < x && end < n)
            curr_sum += arr[end++];


        while (curr_sum >=x && start < n)
        {

            if (end - start < min_len)
                min_len = end - start;

            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
    int main(){
        ll N,Q,k;
        scanf("%lld %lld",&N,&Q);
        ll arr[N];
        ll arr2[N];
        ll zeroes=0;
        for(int i=0;i<N;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]==0)
            {
                zeroes++;
            }
            arr2[i]=__builtin_popcount(arr[i]);
        }
        while(Q--)
        {
            scanf("%lld",&k);
            if(zeroes==N&&k==0)
            {
                printf("1\n");
            }
            else if(zeroes==N&&k>0)
            {
                printf("-1\n");
            }
            else if(smallestSubWithSum(arr2,N,k)==N+1)
            {
                printf("-1\n");
            }
            else{
                printf("%lld\n",smallestSubWithSum(arr2,N,k));
            }
        }
    }
