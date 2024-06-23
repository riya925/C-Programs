#include<iostream>
using namespace std;

class box
{
    int len,wid;
    public:
    static int count;
    box()
    {
        len=0;
        wid=0;
        count++;
    }
    box(int l,int w)
    {
        len=l;
        wid=w;
        count++;
    }
    void show()
    {
        cout<<"\n Length : "<<len;
        cout<<"\n Width : "<<wid;
        cout<<"\n Count of object is = "<<count;
    }
};
int box::count;

int main()
{
    cout<<"\n Enrollement no. : "<<" 170410107108 \n";
    box b1;
    box b2(33,55);
    b1.show();
    b2.show();
    return 0;
}
