    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;


    int main(){
       int n,k;
       cin>>n>>k;
       vector<int>v;
       vector<int>ans;
       for(int i=k;i>=1;i--)
       {
           v.push_back(i);
       }
       int prev=1;
       ans.push_back(1);
       set<int>s;
        s.insert(1);
       int pointer=0;
       bool ok=true;
               for(pointer=0;pointer<v.size();pointer++)
               {
                   //cout<<v[pointer]<<endl;
                  if(ok) {ans.push_back(prev+v[pointer]);ok=false;s.insert(prev+v[pointer]);prev=prev+v[pointer];}
                  else {ans.push_back(prev-v[pointer]);ok=true;s.insert(prev-v[pointer]);prev=prev-v[pointer];}
               }
         for(int i=1;i<=n;i++)
         {
             if(!s.count(i))ans.push_back(i);
         }
         for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
         cout<<endl;
       }
