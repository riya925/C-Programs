#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream fin,fout;
    char f1[20],f2[20];
    char ch,data[1000];
    int i=0;

    cout<<"\n Enter the first file name : ";
    cin>>f1;
    cout<<"\n Enter the second file name : ";
    cin>>f2;

    fin.open(f1,ios::in);
    fout.open(f2,ios::out);
    while(!fin.eof())
    {
        fin.get(ch);
        data[i++]=ch;
    }
    fin.close();
    data[i]=NULL;
    strrev(data);
    fout<<data;
    fout.close();
    return 0;
}
