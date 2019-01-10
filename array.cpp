#include <fstream>
#include <iostream>
#include <stdlib.h>
const int MAX_SIZE1=2, MAX_SIZE2=12;
using namespace std;
void func(int number[MAX_SIZE1][MAX_SIZE2],int r, int c);
int main()
{//	const int MAX_SIZE1=2, MAX_SIZE2=12;
	int temp[MAX_SIZE1][MAX_SIZE2];
	int count=0;
	ifstream myinput;
	myinput.open("DC.txt");
	if(myinput.fail())
	{	
		cout<<"fail"<<endl;
		exit(1);
	}
	for(int x=0; x<MAX_SIZE1; x++){
		for(int i=0; i<MAX_SIZE2; i++)
		{		
			myinput>>temp[x][i];
			cout<<temp[x][i]<<" ";
               		count++;
                        if(count==12)
                                cout<<"\n";
                        else if(count==24)
                       	        cout<<"\n"<<"\n";
		}
	}	
	func(temp,2,12);
        for(int x=0; x<MAX_SIZE1; x++){
                for(int i=0; i<MAX_SIZE2; i++)
                {
                        cout<<temp[x][i]<<" ";
                        count++;
                        if(count==36)
                                cout<<"\n";
                        else if(count==48)
                                cout<<"\n";
                }
	}	
	myinput.close();	
	return 0;
}
void func(int number[MAX_SIZE1][MAX_SIZE2], int r, int c)
{	int count=0;
	for(int x=0; x<r; x++)
	{	for(int i=0; i<c; i++)
		{	
                number[x][i]+=2;	
		}
	}
}
