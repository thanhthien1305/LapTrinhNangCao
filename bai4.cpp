#include <iostream>

using namespace std;

int main()
{
    int total, totalLegs;
    cin >> total >> totalLegs;
    int d=(totalLegs-total*2)/2; int g=total-d;
    if(g*2+d*4==totalLegs)
    {
        cout<<"chicken = "<<g<<", dog = "<<d;
    }
    else cout<<"invalid";
    return 0;
}
