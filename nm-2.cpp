#include <iostream>
#include<math.h>
using namespace std;

float f1(float x);
float f2(float x);
int n,i;
int c[10];
int main()
{
    float a,b,d,e,temp=0;

    cout<<"\n Enter the highest degree of the equation : ";
    cin>>n;
    for(i=n;i>=0;i--)
    {
        cout<<"\n Enter the co-efficient of degree "<<i<<endl;
        cin>>c[i];
    }
    ab:
    cout<<"\n Enter the values between which roots lies a & b : ";
    cin>>a>>b;
    //cout<<"\na="<<a<<"\nb = "<<b;
    //cout<<"\nf1(a)="<<f1(a)<<"\nf1(b) = "<< f1(b);
    //cout<<"\nf2(a)="<<f2(a)<<"\nf2(b) = "<< f2 (b);

    cout<<"\n This is Newton Raphson method.... ";
    if(f1(a)*f1(b)>0)
    {
            cout<<"\n These values of a and b may not be valid : ";
            goto ab;
    }
    else if(f1(a)*f1(b)==0)
    {
        if(f1(a)==0)
            cout<<"\n Exact root is : "<<a;
        else
            cout<<"\n Exact root is : "<<b;
    }
    else
    {
        if(fabs(f1(a))<= fabs (f1(b)))
            d=a;
        else
            d=b;
        cout<<"\n d ="<<d;
        temp=d;
        do
        {
            d=temp;
            e=d-f1(d)/f2(d);
            temp = e;
        }
        while (fabs(d-e)> 0.000001);
    }
    cout<<"\n Approximate root is : "<<e;
    return 0;
}

float f1(float x)
{
    float sum=0;
    for(i=0;i<=n;i++)
    {
          sum=sum+c[i] * pow(x,i);
    }
    return sum;
}
float f2(float x)
{
    float sum=0;
    for(i=1;i<=n;i++)
    {
        sum= sum + i*c[i]*pow(x,i-1);
    }
   return sum;
}
