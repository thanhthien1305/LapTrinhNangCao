#include <iostream>

using namespace std;

int main()
{
    int count=0;long long n;
    cin>>n;
    do
    {
        count++;
        n/=10;
    }while(n!=0);
    cout<<count;
    return 0;
}