#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fin,fout;
    char f1[20],f2[20];
    char ch;

    cout<<"\n Enter the first filename : ";
    cin>>f1;
    cout<<"\n Enter the second filename : ";
    cin>>f2;

    fin.open(f1,ios::in);
    fin.open(f2,ios::out);
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>=65 && ch<=90)
        {
            ch=ch+32;
        }
        fout.put(ch);
    }
    fin.close();
    fout.close();
    cout<<"\n 1 file is copyied.... ";
    return 0;
}
