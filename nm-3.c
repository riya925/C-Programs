#include<iostream>
using namespace std;

float func(float x)
{
    return x*x*x-9*x+1;
}
float func1(float x)
{
    return 3*x*x-9;
}
int main()
{
    float a,b,f1,f2,val,x;
    cout<<"\n Enter the highest power of x : ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<"\n ENTER THE VALUE OF CO-EFFICIENT OF X WHICH POWER IS "<<i<<": ";
        cin>>c[i];
    }
    cout<<"\n Enter the value of a and b = ";
    cin>>a>>b;
    f1=func(a);
    f2=func(b);

    while(f2-f1>=0.001)
    {
        if(f1*f2>0)
            cout<<"\n\n NO ROOTS";
        else
        {
            x=((a*f2)-(b*f1))/(f2-f1);

            if(f1>0)
            {
                if(func(x)*f1>0)
                {
                    a=x;
                }
                else
                    b=x;
            }
            else
            {

                if(func(x)*f2>0)
                    b=x;
                else
                    a=x;
            }
        }
        f1=func(a);
        f2=func(b);
    }
    cout <<"\n\n ROOT is = "<<x;
return 0;
}
