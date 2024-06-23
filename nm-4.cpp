# include<stdio.h>
# include<stdlib.h>
# include<math.h>


int i,n;
float a[10];
float f(float x)
{
    float sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i]*pow(x,i);
    }
  return sum;
}

int main()
{
    int c;
    float x0,x1,x2,y=0,e,temp;
    printf("....SECANT METHOD....");
    printf("\nenter the highest degree of eqn  ");
    scanf("%d",&n);

    for(i=n;i>=0;i--)
    {
        printf("enter the co-efficient of degree %d   ",i);
        scanf("%f",&a[i]);
    }

    a:
    printf("enter x0=");
    scanf("%f",&x0);
    printf("enter x1=");
    scanf("%f",&x1);

    if(f(x0)*f(x1)>0)
    {
        printf("root does not lie between these values\n");
        goto a;
    }
    else if(f(x0)*f(x1)==0)
    {
        if(f(x0)==0)
        {
            printf("the exact root is %f",x0);
        }
        else
        {
            printf("the exact root is %f",x1);
        }
    }
    else
    {
        if(f(x0)>0)
        {


        temp=x0;
        x0=x1;
        x1=temp;

        }
        printf("plz enter desire accuracy  ");
        scanf("%f",&e);
        c=0;
        do
        {


            c++;
            x2=((x0*f(x1)-x1*f(x0))/(f(x1)-f(x0)));

            x0=x1;
            x1=x2;
          // f(x0)=f(x1);
            //f(x1)=f(x2);

        }
        while(fabs(x0-x1)>e);
        printf("the approx root after %d iterations is %f\n",c,x2);




    }
    return 0;
}


