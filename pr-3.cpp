/*Practical 3

Q:1 Write a function power() to raise a number m to a power n.The function takes a double value for m and int value for n,
and returns the result correctly.Use a default value of 2 for n to make the function to calculate squares when this argument is omitted.
Write a main that get the values of m and n for the user to test the function.

#include<iostream>
using namespace std;
double power (double m, int n=2)
{
    int i;
    double sum=1;
    for (i=0; i < n; i++)
    {
        sum=sum*m;
    }
    return sum;
}
int main()
{
    double a,ans;
    int b;
    char ch;
    cout<<"\n Enrollement no. : "<<" 170410107108 \n";
    cout<<"\n Enter base : ";
    cin>>a;
    cout<<"\n Enter power : ";
    cin>>b;
    cout<<"\n When power is not passed ANSWER = "<<power(a);
    cout<<"\n When power is passed ANSWER = "<<power(a,b);
    return 0;
}*/

/*Q:2 Write a function that perform the same operation as above example but takes a int value for m.Both the functions should
have the same name.Write main that calls both the functions.Use the concept of function overloading.*/

#include<iostream>
using namespace std;
double power(double m,int n=2)
{
    int i;
    double sum=1;
    for(i=0;i<n;i++)
    {
        sum=sum*m;
    }
    return sum;
}
int power(int m,int n=2)
{
    int i;
    int sum=1;
    for(i=0;i<n;i++)
    {
        sum=sum*m;
    }
    return sum;
}
int main()
{
    double a,ans;
    int b,c,ans1;
    char ch;
    cout<<"\n Enrollement no. : "<<" 170410107108 \n";
    cout<<"\n Enter base : ";
    cin>>c;
    a=c;
    cout<<"\n Enter power : ";
    cin>>b;
    cout<<"\n When power is not passed ANSWER = "<<power(a)<<"\n When power is passed ANSWER = "<<power(a,b)<<"\n";
    cout<<"\n When power is not passed and base is in int,ANSWER is = "<<power(c)<<"\n When power is passed and base is in int ANSWER is = "<<power(c,b)<<"\n";
    return 0;
}
