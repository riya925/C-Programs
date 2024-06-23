/*#include<iostream>
using namespace std;
class test1
{
    int xx;
    public:
    test1(int xx=20)
    {
        cout<<"In version1 : "<<xx<<endl;
    }
    test1(int x1)
    {
        cout<<"In version2 : "<<xx<<endl;
    }
};
int main()
{
    test1 t1,t1(100);
    return 0;
}*/
#include<iostream>
using namespace std;
class abc
{
    int a,b;
public:
    abc()
    {
        a=b=0;
    }
    abc(int x,int y)
    {
        a=x;
        b=y;
    }
    abc operator++()
    {
        abc ob(a,++b);
        a++;
        return ob;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<"\n";
    }
};
int main()
{
    abc a(10,10);
    abc b=++a;
    a.display();
    b.display();
    return 0;
}
