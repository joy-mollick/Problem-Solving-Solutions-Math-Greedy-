#include <bits/stdc++.h>

using namespace std;

const long long mod=1000000007;
int average(vector<int> a)
{
    long long product=1;
    for(int i=0;i<a.size();i++)
        {
         product=product*(a[i]+1);
         product=product%mod;
        }
    product=product-1;
    return product%mod;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        {
         cin>>a[i];
        }
    cout<<average(a)<<endl;// (n!*s/n!) is average so only s is enough
    return 0;
}
