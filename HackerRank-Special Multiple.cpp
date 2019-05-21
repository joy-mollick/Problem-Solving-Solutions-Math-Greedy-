#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll mod=1e9+7;

bool divisibility(string s,int p)
{
    //cout<<s<<endl;
    int dividend=0;
    for(int i=0;i<s.size();i++)
    {
        dividend=(dividend*10+(s[i]-'0'))%p;
    }
    if(dividend==0)
    {
        //cout<<s<<endl;
        return true;
    }
    else{
        false;
    }
}
vector<string>v;
void binary (int b)
{
    string s="";
    while(b)
    {
        if(b%2==0)
        {
            s=s+'0';
        }
        else
            s=s+'9';
        b=b>>1;
    }
    reverse(s.begin(),s.end());
    v.push_back(s);
    //cout<<s<<endl;
}
int main()
{
    for(int i=1;i<=1000;i++)
    {
        binary(i);
    }
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<1000;i++)
        {
            if(divisibility(v[i],n))
            {
                cout<<v[i]<<endl;
                break;
            }
        }
    }
}
