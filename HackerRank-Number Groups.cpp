#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

// Complete the sumOfGroup function below.


int main()
{
   ll k;
   cin>>k;
   ll total_odd= (k*(k+1))/2;
   ll summ=total_odd*total_odd;
   k=k-1;
   ll total_odd_nw=(k*(k+1))/2;
   ll summ_nw=total_odd_nw*total_odd_nw;
   cout<<summ-summ_nw<<endl;
}
