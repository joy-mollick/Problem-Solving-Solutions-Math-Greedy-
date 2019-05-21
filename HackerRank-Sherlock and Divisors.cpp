#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the divisors function below.
 */
int divisors(int n) {
   if(n%2!=0)
   {
       return 0;
   }
   else{
      int count=0;
      for(int i=2;i<=sqrt(n);i=i+1)
      {
          if(n%i==0)
          {
              if(i%2==0){
              count++;}
              if((n/i)%2==0 && i*i!=n)
              {
                  count++;
              }
          }
      }
      count=count+1;// for the number N itself
      return count;
   }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = divisors(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
