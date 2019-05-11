

#include <bits/stdc++.h>

using namespace std;

#define maxi 1000001

bool prime[maxi];
bool prime_prime[maxi];
int prime_prime_count[maxi]={0};

void sieve()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<maxi;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<maxi;j=j+i)
            {
                prime[j]=false;
            }
        }
}
prime[0]=false;
prime[1]=false;
prime[2]=true;
   int freq=0;
   memset(prime_prime,false,sizeof(prime_prime));
  for(int i=1;i<maxi;i++)
  {
      if(prime[i])
      {
          freq++;
      }
      if(prime[freq])
      {
          prime_prime[i]=true;
      }
  }
  int count=0;
  for(int i=1;i<maxi;i++)
  {
      if(prime_prime[i])
      {
          count++;
      }
      prime_prime_count[i]=count;
  }
}
int main() {
    sieve();
	int num,test,l,r;
	//cout<<prime_prime[3]<<endl;
	cin>>test;
	while(test--){
	cin>>l>>r;
	cout<<prime_prime_count[r]-prime_prime_count[l-1]<<endl;
	}// Writing output to STDOUT
}


