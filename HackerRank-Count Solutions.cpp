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
