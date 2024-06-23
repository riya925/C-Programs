#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    char f1[20];
    char ch[100];
    int i=0;

    cout<<"\n Enter the file name : ";
    cin>>f1;

    fin.open(f1);
    while(!fin.eof())
    {
        fin.getline(ch,80,'\n');
        i++;
        if(i%20==0)
        {
            goto abc;
        }
        cout<<ch;
    }
    fin.close();
    abc:
        return 0;
}
