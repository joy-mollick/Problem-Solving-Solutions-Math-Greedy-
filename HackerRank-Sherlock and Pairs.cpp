#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,t,a;
	cin>>t;
	while(t--)
    {
        cin>>n;
        map<long,long>m;
        while(n--)
        {
            cin>>a;
            m[a]++;
        }
        map<long,long>::iterator it=m.begin();
        long ans=0;
        for(it;it!=m.end();it++)
        {
            long freq=(it->second);
            ans=ans+((freq*(freq-1)))/2;
        }
        ans=ans*2;
        cout<<ans<<endl;
    }
}
