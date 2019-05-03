#include<bits/stdc++.h>

using namespace std;

int main()

{
    int N,M,i,j;
    set<int>Ms;
    scanf("%d",&N);
    int arr[N];
    for( i=0;i<N;i++) scanf("%d",&arr[i]);

    scanf("%d",&M);
    int arr3[M];

    for( j=0;j<M;j++) {scanf("%d",&arr3[j]);Ms.insert(arr3[j]);}

   int count=0;
   for( i=1;i<=100;i++)
   {
       bool isok=true;
       for( j=0;j<N;j++)
       {
           if(!Ms.count(arr[j]+i)||(arr[j]+i)>100)
           {
               isok=false;
           }
       }
       if(isok)
       {
           count++;
           printf("%d ",i);
       }
   }

}
