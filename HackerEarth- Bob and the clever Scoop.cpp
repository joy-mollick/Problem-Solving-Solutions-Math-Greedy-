
#include<bits/stdc++.h>

// Clasical dp problem , U have to find out in which way U have to precalculate the result %m.

using namespace std;

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

// all elements initially zero(0)

int main()
{
    int test,n,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        unordered_map < int,int > m;
        for( i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        sort(arr,arr+n);
        int mx=arr[n-1];
        long long  count=0;
        for( i=0;i<n;i++)
        {
            for( j=2*arr[i];j<=mx;j+=arr[i])
            {
                if(m[j])
                {
                    count=count+m[j];
                }
            }
            if(m[arr[i]]>1)
            {
                count=count+m[arr[i]]-1;
                m[arr[i]]--;
            }
        }
        cout<<count<<endl;
    }
}
