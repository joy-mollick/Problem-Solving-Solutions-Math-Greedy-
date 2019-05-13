#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool flag =false;
    for(int i=n-3;i>=0;i--)
    {
        int sum=arr[i]+arr[i+1];
        if(sum>arr[i+2])
        {
            flag=true;
            cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"-1"<<endl;
    }
}
