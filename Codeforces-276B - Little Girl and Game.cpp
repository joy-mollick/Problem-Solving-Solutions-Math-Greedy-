    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;


    int main(){
       int odd=0;
       int even=0;
       string s;
       cin>>s;
       map<char,int>m;
       for(int i=0;i<s.size();i++)
       {
           m[s[i]]++;
       }
       char c='a';
       for(c;c<='z';c++)
       {
           if(m[c]%2!=0) odd++;
           else even++;
       }
        if(odd==1||odd==0) cout<<"First"<<endl;
       else {if(odd%2==1)cout<<"First"<<endl;else cout<<"Second"<<endl;}
    }
