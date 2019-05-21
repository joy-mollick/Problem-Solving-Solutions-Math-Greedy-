#include <bits/stdc++.h>

using namespace std;

int pr[17] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53 , 59};


int factors (unsigned long long int n) {
    unsigned long long int x = 1;
    int i = 0;
    while ( x <= n  && i < 17 ) {
        x = x * pr[i];
        ++i;
    }
    return i - 1;
}

int main()
{
    unsigned long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<factors(n)<<endl;
    }
    return 0;
}

