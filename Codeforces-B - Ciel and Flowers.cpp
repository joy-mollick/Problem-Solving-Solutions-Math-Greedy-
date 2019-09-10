    #include<bits/stdc++.h>

    using namespace std;


int main()
{
    int a,b,c;
    int ans;
    cin>>a>>b>>c;
    ans=(a/3)+(b/3)+(c/3);
    for(int i=0;i<min(3,min(a,min(b,c)));i++)
    {
        int nw=(a-i)/3 + (b-i)/3 +(c-i)/3 +i;
        ans=max(ans,nw);
    }
    cout<<ans<<endl;
    return 0;
}
