#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,a,n;
    vector<int>v;
    vector<int>v1;
    cin>>t;
    while(t--)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>n;
    while(n--)
    {
        cin>>a;
        v1.push_back(a);
    }
    int mx=*max_element(v1.begin(),v1.end());
    long ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=mx)
        {
            ans+=mx-v[i]+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
