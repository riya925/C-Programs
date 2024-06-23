#include<iostream>
using namespace std;

class oper
{
    int n;
    double x,m;
    public:
    oper(int n)
    {
        this->n=n;
    }
    void power()
    {
        cout<<"\n Enrollement no. : "<<" 170410107108 \n";
        cout<<"\n Enter the value of m :";
        cin>>m;
        int x=1;
        while(n!=0)
        {
            x=x*m;
            --n;
        }
        cout<<"\n The power is:"<<x;
    }
};

int main()
{
    oper o1(2);
    o1.power();
    return 0;
}
