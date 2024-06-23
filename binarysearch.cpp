#include<iostream>
using namespace std;

int main()
{
	int a[1000],i,x,n,flag=0;
	cout<<"\n How many element you want in an array ? : ";
	cin>>n;
	cout<<"Enter the elements of array : ";
	for(i=0;i<n;i++)
	{
			cin>>a[i];
	}

	cout<<"Enter element which you want to search : ";
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}

	}
	if(flag==0)
	{
	cout<<"element is not found"<<endl;
	}
	else
	{
	cout<<"element is found"<<endl;
	}
	return 0;
}
