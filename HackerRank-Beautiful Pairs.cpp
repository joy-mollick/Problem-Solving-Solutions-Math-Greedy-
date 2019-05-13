#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,a,b;
    cin>>n;
    set<int>s;
    int arr[10003]={0};
    int arb[10003]={0};
    for(int i=0;i<n;i++)
    {
       cin>>a;
       arr[a]++;
    }
    for(int i=0;i<n;i++)
    {
       cin>>b;
       arb[b]++;
    }
    int match=0;
    for(int i=0;i<10003;i++)
    {
        match=match+min(arr[i],arb[i]);
    }
    if(match<n)
    {
        cout<<match+1<<endl;
    }
    else
    {
        cout<<match-1<<endl;
    }
    return 0;
}

