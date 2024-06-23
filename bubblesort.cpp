#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int n,i,j, a[9000];
	clock_t start,end;
	cout<<"\n How many element you want to enter : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=n-i;
	}
	start=clock();
	for(i=0;i<n;i++)
	{
		int temp=0;
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	end=clock();
	for(i=0;i<n;i++)
    {
        cout<<"\n Sorted array is : "<<a[i];
    }
	cout<<"\n Time complexity:"<<(end-start)/CLK_TCK;
	return 0;
}
