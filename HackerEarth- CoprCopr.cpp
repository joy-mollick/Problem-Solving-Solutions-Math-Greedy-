

#include <bits/stdc++.h>

using namespace std;

#define maxi 10000001

int phi[maxi]={0};
unsigned long long int phiphi[maxi]={0};

void sieve()
{
   for(int i=1;i<10000001;i++)
   {
       phi[i]=i;
   }
   for (int p=2; p<maxi; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p-1;

            for (int i = 2*p; i<maxi; i += p)
            {
               phi[i] = (phi[i]/p) * (p-1);
            }
        }
    }
    unsigned long long int sum=0;
    for(int i=1;i<maxi;i++)
    {
        sum=sum+phi[i];
        phiphi[i]=sum;
    }
}

int main() {
    sieve();
    string s;
	int num,test,l,r;
	cin>>test;
	while(test--){
	cin>>num;
	cout<<phiphi[num]<<endl;
	}
	return 0;
}


