#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
cin >> n;
double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<fixed<<setprecision(2)<<arr[i]<<" ";
    }
    return 0;
}