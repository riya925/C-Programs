#include<iostream>
#include<fstream>
using namespace std;

class student
{
    int age,id;
    char na[20];
public:
    void input()
    {
        cout<<"\n Enter the student's id-name-age : ";
        cin>>id>>na>>age;
    }
    void show()
    {
        cout<<"\n The student's id-name-age : ";
        cout<<id<<na<<age;
    }
};
int main()
{
    student s1;
    fstream file;
    int i;

    file.open("o.cpp",ios::out|ios::binary);
    for(i=0;i<=2;i++)
    {
        s1.input();
        file.write((char*)&s1,sizeof(s1));
    }
    file.seekg(3,ios::beg);
    file.close();
    file.open("o.cpp",ios::out|ios::binary);
    for(i=0;i<=2;i++)
    {
        s1.show();
        file.read((char*)&s1,sizeof(s1));
    }
    file.close();
    return 0;
}
