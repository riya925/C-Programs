#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
void main()
{
clrscr();
	int a[9000],i,n,j,x,mid,flag=0,temp;
	int low,high;
	clock_t start,end;
	cout<<"howmany element you want to enter?:";
	cin>>n;
	for(i=0;i<n;i++)
	{
			a[i]=rand();
	}

	cout<<"enter element which you want to search:";
	cin>>x;
	start=clock();
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}

	}
	delay(1000);
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
}
