/*Pratical 1

//Q:1 Implement a program to print string on screen.

#include<iostream>
using namespace std;

int main()
{
    cout<<"\n Enrollement no : "<< "170410107108";
    cout<<"\n Hello World ";
    return 0;
}*/

//Q:2 Implement a program of matrix multiplication.

#include<iostream>
using namespace std;

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    cout<<"\n Enrollement no : "<< "170410107108";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n Enter the first matrix : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n Enter the second matrix : ";
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    cout<<"\n Multiplication matrix is : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<c[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
