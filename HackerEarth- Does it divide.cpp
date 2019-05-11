

#include <iostream>

using namespace std;

bool prime(int n)
{
    if(n==2)
    {
        return true;
    }
    else if(n==1)
    {
        return false;
    }
    bool ans=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans=false;
            break;
        }
    }
    return ans;
}

int main() {
	int num,test;
	cin>>test;
	while(test--){
	cin >> num;										// Reading input from STDIN
	if(prime(num+1)&&num!=1)
	{
	    cout<<"NO"<<endl;
	}
	else
	{
	    cout<<"YES"<<endl;
	}
	}// Writing output to STDOUT
}


