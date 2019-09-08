    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;


    int main(){
        string a,b;
        cin>>a>>b;
        int n=a.size();
        bool mn[n]={false};
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i]) {ans++;mn[i]=true;}
        }
        if(ans%2!=0) cout<<"impossible"<<endl;
        else
        {
            ans=ans>>1;
            for(int i=0;i<n;i++)
            {
                if(mn[i]&&ans)
                {
                   if(a[i]=='1') a[i]='0';
                   else a[i]='1';
                   ans--;
                }
            }
            cout<<a<<endl;
        }
    }
