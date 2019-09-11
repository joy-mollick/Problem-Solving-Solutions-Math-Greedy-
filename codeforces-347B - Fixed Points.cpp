#include<bits/stdc++.h>

using namespace std;

const long long mod=1e9+7;

int main()

{
  	int n,ans=0,a[110000];
	cin>>n;
    for (int i=0;i<n;i++)
    {
		cin>>a[i];
		if (i==a[i]) ans++;
	}
	int flag=0;
	for (int i=0;i<n;i++)
	{
		if (i!=a[i]&&a[a[i]]==i)
		{
			flag=1;
			break;
		}
	}
	if (ans!=n)
	{
		if (flag) ans+=2;
		      else ans+=1;
	}

	cout<<ans<<endl;
	return 0;
}
