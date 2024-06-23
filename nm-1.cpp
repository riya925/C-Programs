#include<iostream>
#include<math.h>
using namespace std;

float power(float);
int n,i,c[10];
int main()
{
	float a,b,x,f1,f2;
     	cout<<"\n Enter the highest power of x : ";
     	cin>>n;
     	for(i=0;i<=n;i++)
     	{
         	cout<<"\n ENTER THE VALUE OF CO-EFFICIENT OF X WHICH POWER IS "<<i<<": ";
         	cin>>c[i];
     	}
    	cout<<"\n Enter the value of interval : ";
    	cin>>a>>b;
    	f1=power(a);
    	f2=power(b);
    	cout<<"\n This is BISECTION Function....";
    	cout<<"\n AT f1:"<<f1<<"\n At f2:"<<f2;

         if(f1*f2>0)
         {
		cout<<"\n No Roots!!!!";
         }
         else if((f1*f2)==0)
         {
                if(f1==0)
                    cout<<"\n Root is : "<< a <<endl;
                else
                    cout<<"\n Root is : "<< b << endl;
         }
         else
         {
             while((f2-f1)>=0.01)
             {
            	x=(a+b)/2;
             	if(f1>0)
             	{
                	if(power(x)*f1>0)
                    		a=x;
                	else
                    		b=x;
             	}
             	else
             	{
                 	if(power(x)*f2>0)
                    		b=x;
                 	else
                    		a=x;
             	}
             	f1=power(a);
                f2=power(b);
             }
        }
        cout<<"\n Root is : "<<x;
    	return 0;
}

float power(float x)
{
     float sum=0;

     for(i=0;i<=n;i++)
     {
         sum=sum+pow(x,i)*c[i];
     }
     return sum;
}


