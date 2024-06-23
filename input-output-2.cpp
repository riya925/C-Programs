#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float f1[]={2.4,567.897,12.4532,23.45,5678.32};
    float f2[]={123.456,45.23,1234.3,1234.4321,78};
    int i;

    for(i=0;i<5;i++)
    {
        cout<<setw(5);
        cout<<setfill('*');
        cout<<setprecision(5);
        cout<<setiosflags(ios::showpoint);
        cout<<f1[i];
        cout<<" ";
        cout<<setw(5);
        cout<<f2[i];
        cout<<" \n ";
    }
    return 0;
}
