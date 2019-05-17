#include <bits/stdc++.h>

using namespace std;

const long mod =1e9+7;

int a[17]={0};
vector<string>v;
string s;

void print(int n)
{
    string res="";
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            res=res+s[i];
           // cout<<"1";
        }
    }
    //cout<<endl;
    if(!res.empty())
    v.push_back(res);
}

void solve(int i,int n)
{
    if(i==n)
    {
        print(n);
        return;
    }
    a[i]=0;
    solve(i+1,n);
    a[i]=1;
    solve(i+1,n);
}


int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    cin>>s;
    solve(0,n);
    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    v.clear();
    }
}
