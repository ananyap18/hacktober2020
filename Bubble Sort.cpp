#include<iostream.h>
#include<conio.h>
void bubblesort(int arr[],int size)
{	int temp;
	for(int i=0;i<size;i++)
	{	for(int j=0;j<size-1;j++)
		{	if(arr[j]>arr[j+1])
			{	temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void main()
{	clrscr();
	int a[50],s;
	cout<<"\n\t\tEnter size of the array:";
	cin>>s;
	cout<<"\n\t\tEnter the records into the array:\n\t\t";
	for(int i=0;i<s;i++)
	       {	cin>>a[i];
			cout<<"\n\t\t";
	       }
	cout<<"\n\t\tSorted array is as follows:\n";
	bubblesort(a,s);
	for(int n=0;n<s;n++)
	       {	cout<<a[n]<<"\n\t\t";
	       }

}

