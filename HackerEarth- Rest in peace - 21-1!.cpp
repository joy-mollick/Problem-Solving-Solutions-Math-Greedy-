#include<bits/stdc++.h>

using namespace std;

char s[1000];

bool is21_aspart(int m)
{
    bool one=false;
    bool two=false;
    while(m!=0)
    {
        if(m%100==21)
        {
            return true;
        }
        m=m/10;
    }
    return false;
}

int main()

{
    int N;
    int a,k;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
       scanf("%d",&a);
       if(a%21==0||is21_aspart(a))
       {
           printf("The streak is broken!\n");
       }
       else{
        printf("The streak lives still in our heart!\n");}
    }

    return 0;
}
