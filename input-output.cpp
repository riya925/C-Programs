#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i;
    char na[50];

    cout<<"\n Enter the string : ";
    cin.getline(na,50,'\n');

    for(i=1;i<=strlen(na);i++)
    {
        cout.write(na,i);
        cout<<"\n";
    }
    for(i=i-2;i>=1;i--)
    {
        cout.write(na,i);
        cout<<"\n";
    }
    return 0;
}
