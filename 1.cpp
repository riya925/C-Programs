#include<iostream>
using namespace std;
class employee
{
    int id,age;
    char name[15],dept[15];
    double salary;
    public :
    void input()
    {
        cout<<"\n Enter ID and AGE of employee :";
        cin>>id>>age;
        cout<<"\n Enter NAME of employee :";
        cin>>name;
        cout<<"\n Enter DEPARTMENT of employee :";
        cin>>dept;
        cout<<"\n Enter SALARY of employee :";
        cin>>salary;
    }
    void display()
    {
        cout<<"\n\n Employee ID = "<<id<<"\n Employee NAME = "<<name;
        cout<<"\n Employee AGE = "<<age<<"\n Employee DEPARTMENT = "<<dept;
        cout<<"\n Employee Salary = "<<salary;
    }
};
int main()
{
    employee e[2];
    cout<<"Enrollement no. : "<<" 170410107108 \n";
    cout<<"\n....Objects by an ARRAY....\n";
    for(int i=0;i<2;i++)
        e[i].input();
    for(int i=0;i<2;i++)
        e[i].display();
    return 0;
}
