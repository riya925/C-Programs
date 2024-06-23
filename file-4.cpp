#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream fin;
    char f1[20],line[200];
    int i=0,m,t=0;

    cout<<"\n Enter file : ";
    cin>>f1;

    fin.open(f1,ios::in);
    while(!fin.eof())
    {
        fin.getline(line,80,'\n');
        t++;
    }
    fin.close();
    cout<<"Total lines is : "<<t;
    m=t/2;
    i=0;
    fin.open(f1,ios::in);
    while(!fin.eof())
    {
        fin.getline(line,80,'\n');
        i++;
        if(i>(m-5) && i<(m+5))
        {
            cout<<line<<endl;
        }
    }
    fin.close();
    return 0;
}
