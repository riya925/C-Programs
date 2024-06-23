#include<stdio.h>

void receiver(int[],int[]);
void main()
{
    int dw[4],divisor[4],cw[7],i,j,k,count=0;
    for( i=0;i<4;i++)
   {
        printf("\n Enter data words : ");
        scanf("%d",&dw[i]);
   }
   for(i=0;i<4;i++)
   {
       printf("\n Enter divisor bits : ");
       scanf("%d",&divisor[i]);
   }
   for(i=0;i<4;i++)
   {
       cw[i]=dw[i];
   }
   for(i=0;i<4;i++)
   {
       if(dw[0]==1)
        {
            for(j=0;j<4;j++)
            {
                dw[j]=dw[j]^divisor[j];
            }
        }
       else
       {
           for(j=0;j<4;j++)
           {
               dw[j]=dw[j]^0;
           }
       }
       for(k=0;k<4;k++)
       {
           dw[k]=dw[k+1];
           count++;
       }
       dw[3]=0;
       if(count==3)
       {
        goto abc;
       }
}
abc:
    for(i=0;i<7;i++)
    {
        cw[i+4]=dw[i];
    }
    for(i=0;i<7;i++)
    printf(" \n %d \n",cw[i]);
    printf("\n Received worrds are correct because added bits are :");
    receiver(cw,divisor);
}

void receiver(int a[],int d[])
{
    int i,j,k,count=0,c=0;
    a[0]=0;
    for(i=0;i<7;i++)
   {
       if(a[0]==1)
        {
            for(j=0;j<7;j++)
            {
                a[j]=a[j]^d[j];
            }
        }
       else
       {
           for(j=0;j<7;j++)
           {
               a[j]=a[j]^0;
           }
       }
       for(k=0;k<7;k++)
       {
           a[k]=a[k+1];
           count++;
       }
       if(count==3)
       {
           goto xyz;
       }
   }
xyz:
    for(i=0;i<3;i++)
    {
        printf("\n %d",a[i]);
        if(a[i]==0)
        {
            c++;
        }
    }
    if(c==3)
    {
        printf("\n Tamari mahiti sachi che....jalsa karo");
    }
    else
    {
        printf("\n Tamari mahiti khoti che.....");
    }
}

