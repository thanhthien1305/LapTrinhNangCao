#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        int k=sqrt(i);
        if(k*k==i) cout<<i<<" ";
    }

    return 0;
}
