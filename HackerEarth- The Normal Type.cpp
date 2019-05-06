#include<bits/stdc++.h>

using namespace std;

set<int>s;

void print()
{
    set<int>::iterator it=s.begin();

    for(it;it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

int main()

{
    int N,test;
    scanf("%d",&N);
    int arr[N];
    set<int>k;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        k.insert(arr[i]);
    }
    int bac=0,forw=0;
    long int sub_arrays=0;
    map<int,int>m;
    for(bac=0;bac<N;bac++)
    {
        while(s.size()<k.size()&&forw<N)
        {
            m[arr[forw]]++;
            if(m[arr[forw]]==1){
            s.insert(arr[forw]);}
           // cout<<"for insert ";
            //print();
            ++forw;
        }
        if(s.size()==k.size()){
        sub_arrays+=(N-forw)+1;
        //cout<<" pair "<<(bac)<<" "<<(forw)<<endl;
        }
        m[arr[bac]]--;
        if(m[arr[bac]]==0){
        s.erase(arr[bac]);}
        //cout<<"bac delete ";

    }
    printf("%ld\n",sub_arrays);
}
