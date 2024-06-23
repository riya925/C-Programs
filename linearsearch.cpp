#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
using namespace std;
int main()
{
	int a[9000],i,n,j,x,mid,flag=0,temp;
	int low,high;
	clock_t start,end;
	cout<<"howmany element you want to enter?:";
	cin>>n;
	for(i=0;i<n;i++)
	{
			a[i]=rand();
	}

	for(i=0;i<n;i++)
	{
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
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<endl;
	}

	cout<<"enter element which you want to search:";
	cin>>x;
	start=clock();
	for(i=0;i<n;i++)
	{
	low=i;
	high=n;
		while(low<high)
		{
			mid=(low+high)/2;
			if(a[mid]==x)
				{
				flag=1;
				break;
				}
				else if(a[mid]<x)
				{
				 low=mid+1;
				}
				else
				{
					high=mid;
				}
		}
	}
	//delay(1000);
	end=clock();

	if(flag==0)
	{
	cout<<"element is not found"<<endl;
	}
	else
	{
	cout<<"element is found"<<endl;
	}
	cout<<"time complexity:"<<(end-start)/CLK_TCK;
	return 0;
}

