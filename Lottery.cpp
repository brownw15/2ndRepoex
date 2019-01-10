#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Compare(int a[], int b[], int size);
int main()
{
	srand(time(0));
	const int size=4; 
	int winningDigits[size], Player[size]; 
	for(int r=0; r<=size; r++)
	{
		winningDigits[r]=(rand()%10);
//		cout<<"Insert a Number!";
		cin>>Player[r];
	}
	Compare(winningDigits, Player, size);
}
int Compare(int a[], int b[], int size)
{	int count=0;
	for(int z=0; z<=size; z++)
	{
		if(a[z]==b[z])
		{	//cout<<a[z]<<b[z]<<endl;	
			count++;
		}
	}
	for(int t=0; t<=size; t++)
	{	
		cout<<a[t]<<"\t ";
		if(t==4)
		{	
			cout<<"\n";
		}
		
	}
	cout<<"You had: "<<count<<" matching numbers "<<endl;
	
}
