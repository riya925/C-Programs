#include<iostream>
using namespace std;

int main()
{
        float x[6],y[6],h,d[12][12],xo,p;
        int n;
        cout<<"\n Enter the value of n: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"\n Enter the value of x's: ";
            cin>>x[i];
        }
        cout<<" \n ";
        for(int j=0;j<n;j++)
        {
            cout<<"\n Enter the value of y's: ";
            cin>>y[j];
        }
        h=x[1]-x[0];
        cout<<"\n The difference is: "<<h;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(i==1)
                    d[i][j]=y[j+1]-y[j];
                else
                    d[i][j]=d[i-1][j+1]-d[i-1][j];
            }
        }
        cout<<"\n Enter the value of x: ";
        cin>>x0;
        p=(x0-x[0])/h;
        cout<<"\n p = "<<p;
        float sum=0,prod=1;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<i;j++)
            {
                prod=prod*(p-(j-1))/j;
            }
            cout<<"\n Product is: "<<prod;
            sum=sum+(prod*d[i][0]);
        }
        sum=sum+y[0];
        cout<<"\n Answer is: "<<sum;
        return 0;
}
