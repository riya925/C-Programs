/*Practical-2:Dynamic memory allocation

//Q:1 Write a program to dynamically allocate one dimensional array.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *xx,i,n;
    cout<<"Enrollement no. : "<<" 170410107108 \n";
    cout<<"\n .....DYNAMIC ALLOCATION OF ARRAY.....";
    cout<<"\n ENTER SIZE OF ARRAY : ";
    cin>>n;
    cout<<"\n ENTER ELEMENT OF ARRAY : ";
    xx=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>xx[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n Array is : "<<xx[i];
    }
    return 0;
}*/

/*Q:2 Write a program to allocate two dimensional array with varying size of columns and print in table form.
1 2
4 2 3
5*/

#include<iostream>
using namespace std;

int main()
{
    int **xx,*nc;
    int rr,cc;
    cout<<"\n Enrollement no. : "<<" 170410107108 \n";
    cout<<"\n Enter the size of row :";
    cin>>rr;

    xx=new int*[rr];
    nc=new int[rr];
    for(int i=0;i<rr;i++)
    {
        cout<<"\n Enter the no of col. :";
        cin>>nc[i];
        xx[i]=new int[nc[i]];
    }
    for(int r1=0;r1<rr;r1++)
    {
        for(int c1=0;c1<nc[r1];c1++)
        {
            cout<<"\n enter xx["<<r1+1<<"]["<<c1+1<<"] Element :";
            cin>>xx[r1][c1];
        }
    }
    for(int r1=0;r1<rr;r1++)
    {
        for(int c1=0;c1<nc[r1];c1++)
        {
            cout<<xx[r1][c1]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
