#include <iostream>
using namespace std;

int main() {

    long long int n,i;
    cin>>n;
    long long int arr[n];
    for(i=0 ; i< n ; i++)
        cin>>arr[i];
        long long summation_of_all = 0,prodof_all=0;
    for(i=0 ; i< n ; i++)
    {
        summation_of_all=summation_of_all+ arr[i];
        prodof_all += (i+1)*arr[i];
    }
    long long  output = prodof_all;
    for(i=0 ; i< n; i++)
    {
        prodof_all -= summation_of_all;
        prodof_all +=arr[i]*n;
        /* when the array is  i rotated, then new summation will be reduced to previous-summation of all .Because everyone reduced by one multiplication and new multiplication will be a[i]*n , as it will be rotated */
            output=max(prodof_all,output);
    }
    cout<<output<<endl;
    return 0;
}
