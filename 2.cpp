#include <iostream>
using namespace std;
class student
{
    int stid,stage;
    char stname[10],stdept[10],styear[5];
    public :
    void input()
    {
        cout<<"\n Enter ID and AGE of Student : ";
        cin>>stid>>stage;
        cout<<"\n Enter NAME of the Student : ";
        cin>>stname;
        cout<<"\n Enter DEPARTMENT of Student : ";
        cin>>stdept;
        cout<<"\n Enter YEAR of college of the student :";
        cin>>styear;
    }
    void show()
    {
        cout<<"\n Student's ID = "<<stid;
        cout<<"\n Student's NAME = "<<stname;
        cout<<"\n Student's AGE = "<<stage;
        cout<<"\n Student's DEPARTMENT = "<<stdept;
        cout<<"\n Student's YEAR of college = "<<styear<<"\n";
    }
};

int main()
{
    cout << "\n Enrollment no. : " <<" 170410107108 \n";
    cout << "\n ....DYNAMIC ALLOCATION OF STUDENT CLASS....";
    student *studentlist;
    int nn;
    cout<<"\n\n Enter the no of objects : ";
    cin>>nn;
    studentlist=new student[nn];
    for(int i=0;i<nn;i++)
        studentlist[i].input();
    for(int i=0;i<nn;i++)
        studentlist[i].show();
    return 0;
}
