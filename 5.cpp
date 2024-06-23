#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int aa[10],i,j,max,min;
    cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    cout<<"\n Enter the NUMBERS :";
    for(i=0;i<5;i++)
    {
        cin>>aa[i];
    }
    min=aa[0];
    max=aa[0];
    for(i=0;i<5;i++)
    {
        if(min>aa[i+1])
        {
            min=aa[i+1];
        }
      if(max<aa[i])
        {
            max = aa[i];
        }
    }
    cout<<"\n MINIMUM NUMBER is = "<<min;
    cout<<"\n MAXIMUM NUMBER is = "<<max;
    return 0;
}
