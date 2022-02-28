#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x;cin>>x;
    double sum=1,oldsum=0;
    int i=1;
    double pre_x=x;
    double pre_i=i;
    while(sum-oldsum>0.001)
    {
        oldsum=sum;
        sum+=pre_x/pre_i;
        i++;
        pre_i*=i;
        pre_x*=x;
    }
    cout<<fixed<<setprecision(4)<<sum;
    return 0;
}

