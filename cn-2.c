#include<stdio.h>
#include<math.h>

void receive( int []);
void send();
int div[4],cw[7],i,j;
int main()
{
    send();
    return 0;
}

void send()
{
    int dw[4],k=0,l=0;
    printf("\n Enter the divisor : ");
    for(i=0;i<4;i++)
    {
        scanf("%d",&div[i]);
    }
    printf("\n Enter the data word : ");
    for(i=0;i<4;i++)
    {
        scanf("%d" ,&dw[i]);
        cw[i]=dw[i];
    }
    for(j=0;j<4;j++)
    {
        if(dw[k]==1)
        {
            for(i=0;i<4;i++)
            {
                dw[i] = dw[i] ^ div[i];
            }
        }
        else
        {
            for(i=0;i<4;i++)
            {
                dw[i] = dw[i] ^ 0;
            }
        }
        for(i=0;i<4;i++)
        {
            dw[i]=dw[i+1];
        }
        dw[3]=0;
    }
    for(i=4;i<7;i++)
    {
        cw[i]=dw[i-4];
    }
    printf("\n Whole Codeword is :");
    for(i=0;i<7;i++)
    {
        printf("%d",cw[i]);
    }
    receive(div);
}

void receive(int div[])
{
    int k=0,l=0;
    printf("\n Enter Codeword :");
    for(i=0;i<7;i++)
    {
        scanf("%d",&cw[i]);
    }
    // printf("\n Hi");
    for(i=0;i<4;i++)
    {
        printf("%d ",div[i]);
    }
    for(j=0;j<7;j++)
    {
        if(cw[l]==1)
        {
            for(i=0;i<7;i++)
            {
                cw[i] = cw[i] ^ div[i];
            }
        }
        else
        {
            for(i=0;i<7;i++)
            {
                cw[i] = cw[i] ^ 0;
            }
        }
        //printf("\n Hello");
        for(j=0;j<7;j++)
        {
            cw[j]=cw[j+1];
            k++;
        }
        if(k==3)
        {
            //printf("\n Hi");
            goto xyz;
        }
    }
xyz:
    for(i=0;i<3;i++)
    {
        printf("\n %d",cw[i]);
        if(cw[i]==0)
        {
            l++;
        }
    }
    if(l==3)
        printf("\n Correct information ");
    else
        printf("\n Incorrect information ");
}
