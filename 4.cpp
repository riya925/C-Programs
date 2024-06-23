#include<iostream>
using namespace std;

int power(double,int);
int main()
{
    int n=2;
    double x=1,m;
    cout<<"\n Enrollement no. : "<<" 170410107108 \n";
    cout<<"\n Enter the value of m : ";
    cin>>m;
    x=power(m,n);
    cout<<"\n The power is:"<<x;
    return 0;
}
int power(double m,int n=2)
{
    int x=1;
    while(n!=0)
    {
        x=x*m;
        --n;
    }
    return x;
}
