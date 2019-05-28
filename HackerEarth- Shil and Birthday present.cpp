#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int duplicate=0;
for(int i=0;i<n-1;i++)
{
    if(a[i]==a[i+1])
    {
        duplicate++;
    }
}
int exact_sze=n-duplicate;
long ans=(long)exact_sze;
ans=ans*(ans-1)/2;
cout<<ans<<endl;
}
