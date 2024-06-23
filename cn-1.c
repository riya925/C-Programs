#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void send(char[],int);
void receive(char[],int);

int main()
{
   int c=0,i;
   char xx[30];
   printf("\n Enter the bits : ");
   gets(xx);

   i=strlen(xx);

   send(xx,i);
   return 0;
}

void send(char aa[],int c)
{
    printf("\n size is : %d",c);
    int j,k,l,p=0,cn=0;
    for(j=0;j<c;j++)
    {
        if(aa[j]== '1')
        {
            cn++;
            //printf("\n Hello");
            if(cn==5)
            {
                p++;
                cn=0;
               //printf("\n Hi");
               for(l=(c-1);l>=j;l--)   //this loop for shifting
                {
                    aa[l+1]=aa[l];
                }
                aa[j+1]='0';
                c=c+1;
            }
        }
        else
            cn=0;
    }
    printf("\n Stuffed Bit is = ");
    for(j=0;j<c;j++)
    {
        printf("%c" ,aa[j]);
    }
    printf("\n size = %d",c);
    printf("\n Total Stuffing = %d",p);

    receive(aa,c);
}

void receive(char bb[],int len)
{
    int count,i,j,m=0;
    printf("\n Size of the string = %d",len);

    for (i=0;i<len;i++)
    {
        if(bb[i]=='1')
        {
            count++;
            if(count==5)
            {
                m++;
                count=0;
                //printf("\n Hi");
                for(j=i+1;j<len;j++)
                {
                    bb[j]=bb[j+1];
                }
                len=len-1;
            }
        }
        else
            count=0;
    }
    printf("\n De-Stuffed Bit is = ");
    for(i=0;i<len;i++)
    {
        printf("%c",bb[i]);
    }
    printf("\n Length =%d",len);
    printf("\n Total De-Stuffing = %d\n",m);
}
