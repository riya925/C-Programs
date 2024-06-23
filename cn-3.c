#include<stdio.h>

void receiver(int []);
int r1[]={1,3,5,7,9,11};
int r2[]={2,3,6,7,10,11};
int r4[]={4,5,6,7,12};
int r8[]={8,9,10,11,12};
void main()
{
    int j,dw[12]={0,0,1,0,0,0,1,0,1,0,1,0},cw[12],i,c=0;
    for(i=0;i<12;i++)
    {
        cw[i]=dw[i];
    }
    for(i=0;i<6;i++)
    {
        j=r1[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        cw[0]=1;
    }
    else
    {
        cw[0]=0;
    }
    c=0;
    for(i=0;i<6;i++)
    {
        j=r2[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        cw[1]=1;
    }
    else
    {
        cw[1]=0;
    }
    c=0;
    for(i=0;i<5;i++)
    {
        j=r4[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        cw[3]=1;
    }
    else
    {
        cw[3]=0;
    }
    c=0;
    for(i=0;i<5;i++)
    {
        j=r8[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        cw[7]=1;
    }
    else
    {
        cw[7]=0;
    }
    c=0;
    for(i=0;i<12;i++)
    {
        printf("\n %d ",cw[i]);
    }
    receiver(cw);
 }

void receiver(int cw[])
{
    cw[9]=1;
    int j,i,c=0,cnt=0;
    for(i=0;i<6;i++)
    {
        j=r1[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        printf("\n Error present in 1st bit... ");
        cnt=cnt+1;
    }
    c=0;
    for(i=0;i<6;i++)
    {
        j=r2[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        printf("\n Error present in 2nd bit.... ");
        cnt=cnt+2;
    }
    c=0;
    for(i=0;i<5;i++)
    {
        j=r4[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        printf("\n Error present for 4th bit.... ");
        cnt=cnt+4;
    }
    c=0;
    for(i=0;i<5;i++)
    {
        j=r8[i];
        if(cw[j-1]==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        printf("\n Error present in 8th bit.... ");
        cnt=cnt+8;
    }
    c=0;
    if(cw[cnt-1]==0)
    {
        cw[cnt-1]=1;
    }
    else
    {
        cw[cnt-1]=0;
    }
    for(i=0;i<12;i++)
    {
        printf("\n %d ",cw[i]);
    }
    //removal of bits
    for(i=0;i<12;i++)
    {
        cw[i]=cw[i+1];
    }
    for(i=0;i<11;i++)
    {
        cw[i]=cw[i+1];
    }
    for(i=1;i<10;i++)
    {
        cw[i]=cw[i+1];
    }
    for(i=4;i<9;i++)
    {
        cw[i]=cw[i+1];
    }
    for(i=0;i<8;i++)
    {
        printf("\n %d ",cw[i]);
    }
 }
