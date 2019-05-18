#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()
{
    ll t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        ll one=0;
        ll two=0;
        ll total=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1) one++;
            if(arr[i]==2) two++;
        }
            //by one(1) among them pair value will be 2 (1+1)/(1*1)=2
            total+=2*((one*(one-1))/2);
            // by one(1) all other value will be 1 like (3,1) = (3+1)/(3*1) = 1
            total+=one*(n-one);

            // by 2 among all two's value will be 1 (2+2)/(2*2)=1

            total+=(two*(two-1))/2;

            /* for other values all fromats (a+b)/(a*b) will be zeroe. That's why we will
            not count them */

            cout<<total<<endl;

    }
}
