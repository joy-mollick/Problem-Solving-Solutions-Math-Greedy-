#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

char c[]={'a','e','i','o','u'};

int main()
{
  int n,a;
  cin>>n;
  vector<int>arr;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      arr.push_back(abs(a));
  }
  sort(arr.begin(),arr.end());
  int j=0;
		long long ans = 0;
		for(int i = 0;i < n;i++){
                int x=arr[i];
			j=upper_bound(arr.begin(),arr.end(),2*x)-arr.begin();
			ans =ans+max( j - (i+1),0);
		}
  cout<<ans<<endl;
}
