#include<stdio.h>
#include<conio.h>

int main()
{
  int n,i,j;
  float x1,h,x[10],y[10],di[10][10],p,sum=0,w[10];
  printf("\n Enter max no. : ");
  scanf("%d",&n);
  printf("\n Enter the value of h : ");
  scanf("%f",&h);
  printf("\n Enter the values of y : ");
  for(i=0;i<n;i++)
  {
      scanf("%f",&y[i]);
  }
  printf("\n Enter the value of x[0] : ");
  scanf("%f",&x[0]);
  for(i=1;i<n;i++)
  {
      x[i]=x[i-1]+h;
  }
  for(i=1;i<n;i++)
  {
      for(j=0;j<n-i;j++)
      {
          if(i==1)
          {
              di[i][j]=y[j+1]-y[j];
          }
          else
          {
              di[i][j]=di[i-1][j+1]-di[i-1][j];
          }
      }
  }
  printf("\n Enter the values of x : ");
  scanf("%f",&x1);
  p=(x1-x[0])/h;
  sum=y[0];
  w[0]=1;
  for(i=1;i<n+1;i++)
  {
     w[i]=w[i-1]*(p-(i-1))/i;
  }
  for(i=1;i<n+1;i++)
  {
        sum=sum+(w[i]*di[i][0]);
  }
  printf("%f",sum);
}
