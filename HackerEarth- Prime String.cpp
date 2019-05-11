

#include <bits/stdc++.h>

using namespace std;

#define maxi 100001

bool prime[maxi];

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

}
int main() {
    sieve();
    string s;
	int num,test,l,r;
	//cout<<prime_prime[3]<<endl;
	cin>>test;
	while(test--){
	cin>>s;
	set<int>u;
	map<char,int>m;
	for(int i=0;i<s.size();i++)
    {
        u.insert(s[i]);
        m[s[i]]++;
    }
    int distinct_num=u.size();
    bool freq=true;
    map<char,int>::iterator it=m.begin();
    for(it;it!=m.end();it++)
    {
        if(!prime[(it->second)])
        {
            freq=false;
        }
    }
    if(prime[distinct_num]&&freq)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	}// Writing output to STDOUT
	return 0;
}


