/*
Given , x^2 + y^2 = (x*a) +(y*b) ;

x^2 - x*a  + y^2 - y*b = 0; [ side change ]

x^2 - 2 * (1/2) * (x) *a + (a/2)^2  - (a/2)^2 + y^2 - y*b =0 ;

( x - (a / 2) ) ^2 =   (a/2)^2 - y^2 + y*b ;

( x - (a / 2) ) ^2 =   (a^2 / 4) + y * (b - y) ;

( x - (a / 2) ) ^2  =  ( a^2 + 4* y * (b - y) )/4;

( x - (a / 2) )  = sqrt (   ( a^2 + 4* y * (b - y) )/4 );

x  =   sqrt (   ( a^2 + 4* y * (b - y) )/4 )  +   (a / 2) ;

x =    sqrt (   ( a^2 + 4* y * ( b - y )  )  )  +  a  ) / 2;

x  =  ( (+-)sq  +a ) /2;  //   here sq holds for sqrt (   ( a^2 + 4* y * ( b - y )  )  ) 

So  u have to care about 1) is sq positive ?otherwise there is no pair for y  

 2)  If  sq = 0 , then pairs are only one because then  (a+sq) and (a-sq) will be same value ,if sq !=0 then for one y there will be two pair .
 
 3)  Now   (a+sq)/2 is integer ? and between 1 and d ? then count.
 
 4) Another  (a-sq)/2  is integer ? and between 1 and d ? then count .
 
 That's all .

*/



#include <bits/stdc++.h>

using namespace std;

bool square(long d)
{
    long n=sqrt(d);
    if(n*n==d)
    {
        return true;
    }
    else{
        return false;
    }
}

int main() {
    long q,a,b,c,d,y,i;
    long x,x1;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c>>d;
        long long pair_count=0;
        for(y=1;y<=d;y++){
             long discriminator = ((a)*(a)+ 4*y*(b-y));
             long sq=sqrt(discriminator);
             if(discriminator<0)
                continue;
             if(!square(discriminator))
                continue;
             if((sq+a)%2==0 && ((sq+a)/2)>=1 && ((sq+a)/2)<=c) pair_count++;
             if((a-sq)%2==0 && (sq!=0)&&((a-sq)/2)>=1 && ((a-sq)/2)<=c) pair_count++;

        }
        cout<<pair_count<<endl;
    }
    return 0;
}
